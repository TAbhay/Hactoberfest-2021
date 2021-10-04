require_relative "./cloud_types"

class ReadmeGenerator
  WORD_CLOUD_URL = 'https://raw.githubusercontent.com/javagarm/JavagarM/master/wordcloud/wordcloud.png'
  ADDWORD = 'add'
  SHUFFLECLOUD = 'shuffle'
  INITIAL_COUNT = 3
  USER = "javagarm"

  def initialize(octokit:)
    @octokit = octokit
  end

  def generate
    participants = Hash.new(0)
    current_contributors = Hash.new(0)
    current_words_added = INITIAL_COUNT
    total_clouds = CloudTypes::CLOUDLABELS.length
    total_words_added = INITIAL_COUNT * total_clouds

    octokit.issues.each do |issue|
      participants[issue.user.login] += 1
      if issue.title.split('|')[1] != SHUFFLECLOUD && issue.labels.any? { |label| CloudTypes::CLOUDLABELS.include?(label.name) }
        total_words_added += 1
        if issue.labels.any? { |label| label.name == CloudTypes::CLOUDLABELS.last }
          current_words_added += 1
          current_contributors[issue.user.login] += 1
        end
      end
    end

    
   <h1>Hello World!<img src="https://github.com/javagarm/JavagarM/blob/main/assets/Hi.gif" width="29px"></h1><h1>I'm &nbsp;&nbsp;JAVAGAR</h1>
[![Visits Badge](https://badges.pufler.dev/visits/javagarm/javagarm)](https://badges.pufler.dev/visits/javagarm/javagarm)

 <img src="https://github.com/javagarm/JavagarM/blob/main/assets/life_balance.gif" alt="side Image" align="right" width="200" height="auto" />
 <img src="https://media3.giphy.com/media/ZEB6yFbLnhyQf7g3hn/giphy.gif" alt="side Gif" align="right" width="150" height="auto"/>

  - 🔭 Currently Working towards Master's Degree
  - 🌱 I’m currently learning Machine Learning and AI
  - 💬 Ask me about Data...
  - 😄 Pronouns: He / Him
  - ⚡ Fun fact: Juz..Now I'm trying 2.. understand Myself
Reach me @ [![Gmail Badge](https://img.shields.io/badge/-javagarjava01-c14438?style=flat&logo=Gmail&logoColor=white&link=mailto:javagarjava01@gmail.com)](mailto:javagarjava01@gmail.com)
Connect me with
[![Linkedin Badge](https://img.shields.io/badge/-javagarm-blue?style=flat&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/javagarm/)](https://www.linkedin.com/in/javagarm/)
[![kaggle Badge](https://img.shields.io/badge/-javagarm-white?style=flat&logo=kaggle&logoColor=blue&link=https://www.kaggle.com/javagarm/)](https://www.kaggle.com/javagarm/)
[![Twitter Badge](https://img.shields.io/badge/-@javagar_m-1ca0f1?style=flat&labelColor=1ca0f1&logo=twitter&logoColor=white&link=https://twitter.com/javagar_m)](https://twitter.com/javagar_m)
[![Hackerrank Badge](https://img.shields.io/badge/-javagarm-2EC866?style=flat&labelfor-the-badge&logo=HackerRank&logoColor=black&link=https://www.hackerrank.com/javagarm/)](https://www.hackerrank.com/javagarm/)
[![Stats](https://github-readme-stats.vercel.app/api?username=javagarm&show_icons=true&theme=radical)](https://github-readme-stats.vercel.app/api?username=javagarm&show_icons=true&theme=radical)&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <img src="https://github.com/javagarm/JavagarM/blob/main/assets/saved.gif" width="195">
[![trophy](https://github-profile-trophy.vercel.app/?username=javagarm&theme=juicyfresh&no-frame=true&row=1&&margin-w=20&no-bg=true)](https://github-profile-trophy.vercel.app/?username=javagarm&theme=juicyfresh&no-frame=true&row=1&&margin-w=20&no-bg=true)
<p><img align="left" src="https://github-readme-stats.vercel.app/api/top-langs?username=javagarm&show_icons=true&locale=en&layout=compact" alt="javagarm" /></p>
 <p>&nbsp;<img align="center" src="https://github-readme-streak-stats.herokuapp.com/?user=javagarm&" alt="javagarm" /></p>
 Join the Community Word Cloud :cloud: :pencil2:
 ![](https://img.shields.io/badge/Words%20Added-#{total_words_added}-brightgreen?labelColor=7D898B)
      ![](https://img.shields.io/badge/Word%20Clouds%20Created-#{total_clouds}-48D6FF?labelColor=7D898B)
      ![](https://img.shields.io/badge/Total%20Participants-#{participants.size}-AC6EFF?labelColor=7D898B)

       :thought_balloon: [Add a word](https://github.com/javagarm/JavagarM/issues/new?template=addword.md&title=wordcloud%7C#{ADDWORD}%7C%3CINSERT-WORD%3E) to see the word cloud update in real time :rocket:

      A new word cloud will be automatically generated when you [add your own word](https://github.com/javagarm/JavagarM/issues/new?template=addword.md&title=wordcloud%7C#{ADDWORD}%7C%3CINSERT-WORD%3E). The prompt will change frequently, so be sure to come back and check it out :relaxed:

      :star2: Don't like the arrangement of the current word cloud? [Regenerate it](https://github.com/javagarm/JavagarM/issues/new?template=shufflecloud.md&title=wordcloud%7C#{SHUFFLECLOUD}) :game_die:

      <div align="center">

        {CloudTypes::CLOUDPROMPTS.last}

        <img src="#{WORD_CLOUD_URL}" alt="WordCloud" width="100%">

        ![Word Cloud Words Badge](https://img.shields.io/badge/Words%20in%20this%20Cloud-#{current_words_added}-informational?labelColor=7D898B)
        ![Word Cloud Contributors Badge](https://img.shields.io/badge/Contributors%20this%20Cloud-#{current_contributors.size}-blueviolet?labelColor=7D898B)


     TODO: [![Github Badge](https://img.shields.io/badge/-@username-24292e?style=flat&logo=Github&logoColor=white&link=https://github.com/username)](https://github.com/username)

    current_contributors.each do |username, count|
      markdown.concat("[![Github Badge](https://img.shields.io/badge/-@#{format_username(username)}-24292e?style=flat&logo=Github&logoColor=white&link=https://github.com/#{username})](https://github.com/#{username}) ")
    end

    markdown.concat("\n\n Check out the [previous word cloud](#{previous_cloud_url}) to see our community's **#{CloudTypes::CLOUDPROMPTS[-2]}**")

    markdown.concat("</div>")

    end

  private

  def format_username(name)
    name.gsub('-', '--')
  end

  def previous_cloud_url
    url_end = CloudTypes::CLOUDPROMPTS[-2].gsub(' ', '-').gsub(':', '').gsub('?', '').downcase
    "https://github.com/javagarm/JavagarM/blob/master/previous_clouds/previous_clouds.md##{url_end}"
  end

  attr_reader :octokit
end
