from flask import Flask, request, jsonify

app = Flask(__name__)


@app.route('/', methods=['GET'])
def hello_world():
    return 'Hello world'


@app.route('/hello/<name>', methods=['GET'])
def hello_name(name):
    return "Hello {}\n".format(name)


@app.route('/goodbye', methods=['GET'])
def goodbye():
    name = request.args.get('name')
    if name is None:
        return "Goodbye"
    else:
        return "Goodbye {}\n".format(name)


@app.route('/double/<num>', methods=['GET'])
def double(num):
    double_result = int(num) * 2
    return str(double_result)


@app.route('/animals', methods=['GET', 'POST'])
def animals():
    animal = request.args.get('animal')

    list_animals = ['zebra', 'lion', 'giraffe']
    if request.method == 'GET':
        return jsonify({'animals': [list_animals]})

    if request.method == 'POST':
        if animal is not None:
            list_animals.append(animal)
        return jsonify({'animals': [list_animals]})


@app.route('/colors/<color>', methods=['POST'])
def colors(color):

    colors_list = ['red', 'green', 'blue']
    colors_list.append(color)
    return jsonify({'colors': [colors_list]})


if __name__ == 'main':
    app.run(debug=True, host='0.0.0.0')
