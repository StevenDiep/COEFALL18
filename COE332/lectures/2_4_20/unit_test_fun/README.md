### Unit Testing Example

Install `coverage` and `requests`. You may use:

```
pip3 install coverage requests
```

Alternatively you may install using the `requirements.txt` file with:

```
pip3 install -r requirements.txt
```

To search for all tests in the `quadratics_fun` project and generate a test and coverage report, use the command:

```
coverage run --source=quadratics_fun -m unittest discover -s quadratics_fun/ -p "*_test.py"
```

This command runs the `coverage` tool, limiting its report to the `--source` directory `quadratics_fun`. The
specific test suite that it uses is the `-m` module `unittest`, with discovery of tests limited to
`quadratics_fun/`. The `-p` pattern it uses for test discovery is `"*_test.py"`.

To view the coverage report, you can type:

```
coverage report
```

But you could also generate an interactive report with:

```
coverage html
```

This will make an `htmlcov` directory with an interactive page that shows you what lines aren't covered
