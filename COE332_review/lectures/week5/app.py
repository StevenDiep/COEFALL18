from flask import Flask, jsonify, request
import json
app = Flask(__name__)

@app.route('/')
def original():
	return "This is week5 example's api"

@app.route('/degrees')
def return_degrees():
	limit = int(request.args.get('limit'))
	data = [{'id': 0, 'year': 1990, 'degrees': 5818},
    		{'id': 1, 'year': 1991, 'degrees': 5725},
		{'id': 2, 'year': 1992, 'degrees': 6005},
    		{'id': 3, 'year': 1993, 'degrees': 6123},
    		{'id': 4, 'year': 1994, 'degrees': 6096},
    		]
	return jsonify(data[:limit])

@app.route('/test')
def test():
	return json.dumps([{'id': 0, 'year': 1990, 'degrees': 5818},
                {'id': 1, 'year': 1991, 'degrees': 5725},
                {'id': 2, 'year': 1992, 'degrees': 6005},
                {'id': 3, 'year': 1993, 'degrees': 6123},
                {'id': 4, 'year': 1994, 'degrees': 6096},
                ])
	
if __name__ == '__main__':
	app.run(debug=True, host='0.0.0.0')
