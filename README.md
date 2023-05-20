# Jetus
 Language development of stylized desktop applications with functionality reminiscent of React Native and Electron.

# Example

## app.jetus 
```jetus
import ssk <# STANDARD STYLE KIT IMPORT #>

$(~*, ClickButton)
{
    fx onClick()
    {
        $(~id, welcome-label).text = "Button Clicked"
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