<header id="main-header">
    <div id="header-top">
        <div class="container">
            <div class="sixteen columns">
                <div id="logo-container">
                    <div id="logo-center">
                        <a href="/index.html">
                            <img src="/assets/img/logo.png" alt="ssbla">
                        </a>
                    </div>
                </div>
                <div class="tagline">bravely done.</div>
                <nav id="main-nav">
                    <ul>
                        <li {% if page.active_nav == 'Blog' %}class="active" {% endif %}><a href="/index.html">Blog</a></li>
                        <li {% if page.active_nav == 'Results' %}class="active" {% endif %}><a href="/results">Results</a></li>
                        <li {% if page.active_nav == 'Tech' %}class="active" {% endif %}><a href="/technology">Technology</a></li>
                    </ul>
                </nav>
            </div>
        </div>
    </div>
    <div id="header-bottom">
        <div class="container">
            <div class="sixteen columns"></div>
        </div>
    </div>
</header>