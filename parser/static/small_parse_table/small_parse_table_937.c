/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_937.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4685(t_small_parse_table_array *v)
{
	v->a[93700] = aux_sym_if_statement_repeat1;
	v->a[93701] = 3;
	v->a[93702] = actions(1074);
	v->a[93703] = 1;
	v->a[93704] = sym_comment;
	v->a[93705] = actions(1116);
	v->a[93706] = 1;
	v->a[93707] = anon_sym_DOLLAR;
	v->a[93708] = actions(1118);
	v->a[93709] = 5;
	v->a[93710] = sym_heredoc_content;
	v->a[93711] = sym_heredoc_end;
	v->a[93712] = anon_sym_DOLLAR_LBRACE;
	v->a[93713] = anon_sym_DOLLAR_LPAREN;
	v->a[93714] = anon_sym_BQUOTE;
	v->a[93715] = 3;
	v->a[93716] = actions(3);
	v->a[93717] = 1;
	v->a[93718] = sym_comment;
	v->a[93719] = actions(1104);
	small_parse_table_4686(v);
}

void	small_parse_table_4686(t_small_parse_table_array *v)
{
	v->a[93720] = 2;
	v->a[93721] = sym_regex;
	v->a[93722] = aux_sym_expansion_regex_token1;
	v->a[93723] = actions(1102);
	v->a[93724] = 4;
	v->a[93725] = anon_sym_RPAREN;
	v->a[93726] = anon_sym_RBRACE;
	v->a[93727] = anon_sym_DQUOTE;
	v->a[93728] = sym_raw_string;
	v->a[93729] = 5;
	v->a[93730] = actions(1074);
	v->a[93731] = 1;
	v->a[93732] = sym_comment;
	v->a[93733] = actions(4016);
	v->a[93734] = 1;
	v->a[93735] = sym_simple_heredoc_body;
	v->a[93736] = actions(4018);
	v->a[93737] = 1;
	v->a[93738] = sym__heredoc_body_beginning;
	v->a[93739] = state(2239);
	small_parse_table_4687(v);
}

void	small_parse_table_4687(t_small_parse_table_array *v)
{
	v->a[93740] = 1;
	v->a[93741] = sym_heredoc_body;
	v->a[93742] = state(1229);
	v->a[93743] = 2;
	v->a[93744] = sym__heredoc_body;
	v->a[93745] = sym__simple_heredoc_body;
	v->a[93746] = 5;
	v->a[93747] = actions(1074);
	v->a[93748] = 1;
	v->a[93749] = sym_comment;
	v->a[93750] = actions(4018);
	v->a[93751] = 1;
	v->a[93752] = sym__heredoc_body_beginning;
	v->a[93753] = actions(4020);
	v->a[93754] = 1;
	v->a[93755] = sym_simple_heredoc_body;
	v->a[93756] = state(2136);
	v->a[93757] = 1;
	v->a[93758] = sym_heredoc_body;
	v->a[93759] = state(1352);
	small_parse_table_4688(v);
}

void	small_parse_table_4688(t_small_parse_table_array *v)
{
	v->a[93760] = 2;
	v->a[93761] = sym__heredoc_body;
	v->a[93762] = sym__simple_heredoc_body;
	v->a[93763] = 2;
	v->a[93764] = actions(1074);
	v->a[93765] = 1;
	v->a[93766] = sym_comment;
	v->a[93767] = actions(1114);
	v->a[93768] = 5;
	v->a[93769] = sym__concat;
	v->a[93770] = anon_sym_PIPE;
	v->a[93771] = anon_sym_RPAREN;
	v->a[93772] = anon_sym_RBRACE;
	v->a[93773] = aux_sym_concatenation_token1;
	v->a[93774] = 2;
	v->a[93775] = actions(1074);
	v->a[93776] = 1;
	v->a[93777] = sym_comment;
	v->a[93778] = actions(1118);
	v->a[93779] = 5;
	small_parse_table_4689(v);
}

void	small_parse_table_4689(t_small_parse_table_array *v)
{
	v->a[93780] = sym__concat;
	v->a[93781] = anon_sym_PIPE;
	v->a[93782] = anon_sym_RPAREN;
	v->a[93783] = anon_sym_RBRACE;
	v->a[93784] = aux_sym_concatenation_token1;
	v->a[93785] = 2;
	v->a[93786] = actions(1074);
	v->a[93787] = 1;
	v->a[93788] = sym_comment;
	v->a[93789] = actions(1122);
	v->a[93790] = 5;
	v->a[93791] = sym__concat;
	v->a[93792] = anon_sym_PIPE;
	v->a[93793] = anon_sym_RPAREN;
	v->a[93794] = anon_sym_RBRACE;
	v->a[93795] = aux_sym_concatenation_token1;
	v->a[93796] = 2;
	v->a[93797] = actions(1074);
	v->a[93798] = 1;
	v->a[93799] = sym_comment;
	small_parse_table_4690(v);
}

/* EOF small_parse_table_937.c */
