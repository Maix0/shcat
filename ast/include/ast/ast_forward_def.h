/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_forward_def.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:24:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/11 14:24:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_FORWARD_DEF_H
#define AST_FORWARD_DEF_H

typedef enum e_ast_node_kind t_ast_node_kind;
typedef enum e_ast_word_kind t_ast_word_kind;
typedef enum e_ast_list_kind t_ast_list_kind;

typedef union u_ast_node_data t_ast_node_data;

typedef struct s_ast_node t_ast_node;

typedef struct s_ast_empty		  t_ast_empty;
typedef struct s_ast_command	  t_ast_command;
typedef struct s_ast_word		  t_ast_word;
typedef struct s_ast_pipeline	  t_ast_pipeline;
typedef struct s_ast_raw_string	  t_ast_raw_string;
typedef struct s_ast_built_string t_ast_built_string;
typedef struct s_ast_list		  t_ast_list;

#endif /* AST_FORWARD_DEF_H */
