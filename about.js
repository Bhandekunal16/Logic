const aboutContent = () => {
    return `
      <h2>Our Company</h2>
      <p>This is the About page where you can provide information about your company, organization, or yourself.</p>
      <div>
      <a href="https://bhandekunal16.github.io/Resume/">about me</a>
      </div>
      <p>Feel free to add details about your company's history, mission, vision, team members, or any other relevant information.</p>
    `;
  };
  
  function about() {
    appContent.innerHTML = aboutContent();
  }