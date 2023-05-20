# Jetus
 Language development of stylized desktop applications with functionality reminiscent of React Native and Electron.

# Example

## app.jetus 
```jetus
load ssk; <# STANDARD STYLE KIT IMPORT #>
load clock;
load io;
load os;

@start()
{
    $(~*, MyApplication) as app
    {
        app >> start();
    }

    string appdata_directory = (os >> key['%appdata%']).str();
    io >> mkdir(wc'{appdata_directory}\\.app');
    string app_data_folder = wc'{appdata_directory}\\.app' + "\\data" ;
}

fx changeBackgroundColor(window(Component), toColor(hex))
{
    window >> background = toColor;
}

@frame()
{
    $(~*, MyApplication) as app
    {
        app >> meta >> create("ticker", clock >> ticker );
    }
}

$(~*, ClickButton)
{
    fx onClick()
    {
        $(~id, welcome-label) >> text = "Button Clicked";
    }
}
$(~id, welcome-label) {
    fx onClick()
    {
        write("welcome label clicked", end="\n");
    }
}
```
### app.layout.jetus
```jetus
<Application MyApplication>
  <Window MainWindow title="My Application" size={[800, 600]} position={[100, 100]} style="Dark">
    <Label WelcomeLabel id="welcome-label" text="Welcome to My Application!" font={["Arial", 24]} color="#FFFFFF" position={[100, 200]} />
    
    <Button ClickButton text="Click Me!" font={["Arial", 18]} color="#000000" position={[300, 300]} size={[100, 50]} />
  </Window>
</Application>
```