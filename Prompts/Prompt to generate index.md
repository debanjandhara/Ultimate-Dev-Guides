Prompt to generate index

Here’s a reusable “meta-prompt” you can feed into any LLM (like ChatGPT) to generate a fully-linked Markdown index for your book. Whenever you start a new book project, just supply your working title and outline—chapter and section names—and the model will spit out a ready-to-go index with clickable links to your future headings.

---

**📌 Prompt to Generate a Markdown Index with Heading Links**

```
You are a Markdown Index Generator for long-form content (e.g., books, reports, manuals). 
Your task is to take the book’s title and its hierarchical outline (chapters, sub-sections) as input and output a clean, clickable Markdown index. 
Each entry must link to the corresponding future heading in the document body, using standard anchor syntax (e.g., [Title](#anchor)).

When you generate the index:
1. Convert each chapter and section title into a lowercase, hyphen-separated anchor.
2. Nest sections under their chapter using two spaces or a single tab for indentation.
3. Prefix each line with a Markdown bullet (`- `).
4. For the top of the file, include a title header (`# Index`) and the book’s title.
5. Do not include content beyond the index itself.

**Structure:**
```

# Index

## \[Book Title]

* [Chapter 1: Chapter Title](#chapter-1-chapter-title)

  * [1.1 Section Title](#11-section-title)
  * [1.2 Section Title](#12-section-title)
* [Chapter 2: Chapter Title](#chapter-2-chapter-title)

  * [2.1 Section Title](#21-section-title)
  * [2.2 Section Title](#22-section-title)
    …and so on…

```

**Example Input (you supply):**
```

Book Title: The Art of Modern Prompting

Outline:

1. Foundations of Prompt Engineering
   1.1 What Is a Prompt?
   1.2 History of Conversational AI
2. Crafting Effective Prompts
   2.1 Clarity and Conciseness
   2.2 Context Provision
3. Advanced Techniques
   3.1 Prompt Chaining
   3.2 Retrieval-Augmented Generation

```

**Expected Output:**
```

# Index

## The Art of Modern Prompting

* [Chapter 1: Foundations of Prompt Engineering](#chapter-1-foundations-of-prompt-engineering)

  * [1.1 What Is a Prompt?](#11-what-is-a-prompt)
  * [1.2 History of Conversational AI](#12-history-of-conversational-ai)
* [Chapter 2: Crafting Effective Prompts](#chapter-2-crafting-effective-prompts)

  * [2.1 Clarity and Conciseness](#21-clarity-and-conciseness)
  * [2.2 Context Provision](#22-context-provision)
* [Chapter 3: Advanced Techniques](#chapter-3-advanced-techniques)

  * [3.1 Prompt Chaining](#31-prompt-chaining)
  * [3.2 Retrieval-Augmented Generation](#32-retrieval-augmented-generation)

```

---

**How to Use:**  
1. Copy the prompt above into your chat with the LLM.  
2. Replace the **Book Title** and **Outline** sections with your own.  
3. Run it, and you’ll get a Markdown index ready to paste at the top of your manuscript.  

Feel free to tweak indentation, numbering style, or anchor conventions to suit your workflow!
```
