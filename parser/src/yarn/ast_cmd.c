/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:44:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/09 12:45:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "parser/token.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_token.h"

/// la fonction doit prendre une t_token de type TOK_CMD qui contient que deux type de subtokens TOK_WORD ou TOK_REDIR
/// un TOK_WORD == un arguemnt
/// un TOK_REDIR == une redirection
/// les deux sont dans le bonne ordre.
/// il faut push les TOK_REDIR dans ast_node->data.command.prefix;
/// let TOK_WORD dans ast_node->data.command.arguements;
/// les noms peuvent etre different idk
/// a terme la fonction utilisera t_error et tt;
/// struct s_ast_command `ast/include/ast/_raw_structs.h`
t_ast_node ast_from_cmd(t_token tok);
