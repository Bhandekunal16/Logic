const homeContent = () => {
  return ` <div style="background-color: rgb(216, 216, 216); padding: 3%; border-radius: 8px;">
  <div style="text-align: center;">
      <h1>contribute create a good code environment.</h1>
  </div>
  <div style="background-color: whitesmoke; border-radius: 8px;">
      <li>
          <a href="https://github.com/Bhandekunal16/Logic/tree/main/c">c codes for basic use.</a>
      </li>
      <li>
         <a href="https://github.com/Bhandekunal16/Logic/tree/main/javascript"> javascript code for basic use.</a>
      </li>
      <li>
          <a href="https://github.com/Bhandekunal16/Logic/tree/main/python">python code for basic use.</a>
      </li>
  </div>

  <div>
  <p>if you want to add your stuff then follow below steps</p>
  <p>open the terminal</p>
  <h3 style="color: red"> git-hub account is important for this.  </h3>
  <p> add this command : git clone https://github.com/Bhandekunal16/Logic.git</p>
  </div>

 
</div>`;
};

function home() {
  appContent.innerHTML = homeContent();
}
