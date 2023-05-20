# Jetus
 Language development of stylized desktop applications with functionality reminiscent of React Native and Electron.

# Example

```jetus
<Application MyApplication>
  <Window MainWindow title="My Application" size={[800, 600]} position={[100, 100]} style="Dark">
    <Label WelcomeLabel text="Welcome to My Application!" font={["Arial", 24]} color="#FFFFFF" position={[100, 200]} />
    
    <Button ClickButton text="Click Me!" font={["Arial", 18]} color="#000000" position={[300, 300]} size={[100, 50]} onClick={() => {
      // Button click event handler code
      WelcomeLabel.setText("Button Clicked!");
    }} />
  </Window>
  
  <Script>
    const value = 10;
    
    function add(a, b) {
      return a + b;
    }
  </Script>
</Application>

```