# first install this package (pip install Flask)

from flask import Flask, render_template_string

app = Flask(__name__)

@app.route('/')
def index():
    title = "Server-Side Rendering"
    message = "This content was rendered on the server side using Flask and Jinja2."
    
    html_template = """
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Server-Side Rendering Example</title>
    </head>
    <body>
        <h1>{{ title }}</h1>
        <p>{{ message }}</p>
    </body>
    </html>
    """
    
    return render_template_string(html_template, title=title, message=message)

# Note: No if __name__ == '__main__': block needed

# Run the app
app.run(host='0.0.0.0', port=8081)