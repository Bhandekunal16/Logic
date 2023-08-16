const homeContent = () => {
  return ` <div style="background-color: rgb(216, 216, 216); padding: 10%; border-radius: 8px;">
  <div style="text-align: center;">
      <h1>contribute create a good code environment.</h1>
  </div>
  <div style="background-color: whiteSmoke; border-radius: 8px;">
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

 
</div>`;
};

function home() {
  appContent.innerHTML = homeContent();
}
