/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1317.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6585(t_small_parse_table_array *v)
{
	v->a[131700] = anon_sym_LT_EQ;
	v->a[131701] = anon_sym_GT_EQ;
	v->a[131702] = anon_sym_RBRACK_RBRACK;
	v->a[131703] = anon_sym_EQ_TILDE;
	v->a[131704] = anon_sym_QMARK;
	v->a[131705] = anon_sym_COLON;
	v->a[131706] = 6;
	v->a[131707] = actions(71);
	v->a[131708] = 1;
	v->a[131709] = sym_comment;
	v->a[131710] = actions(1369);
	v->a[131711] = 1;
	v->a[131712] = sym_test_operator;
	v->a[131713] = state(2475);
	v->a[131714] = 1;
	v->a[131715] = aux_sym_concatenation_repeat1;
	v->a[131716] = actions(1077);
	v->a[131717] = 2;
	v->a[131718] = sym__concat;
	v->a[131719] = aux_sym_concatenation_token1;
	small_parse_table_6586(v);
}

void	small_parse_table_6586(t_small_parse_table_array *v)
{
	v->a[131720] = actions(6600);
	v->a[131721] = 14;
	v->a[131722] = anon_sym_EQ;
	v->a[131723] = anon_sym_PIPE;
	v->a[131724] = anon_sym_CARET;
	v->a[131725] = anon_sym_AMP;
	v->a[131726] = anon_sym_LT;
	v->a[131727] = anon_sym_GT;
	v->a[131728] = anon_sym_LT_LT;
	v->a[131729] = anon_sym_GT_GT;
	v->a[131730] = anon_sym_PLUS;
	v->a[131731] = anon_sym_DASH;
	v->a[131732] = anon_sym_STAR;
	v->a[131733] = anon_sym_SLASH;
	v->a[131734] = anon_sym_PERCENT;
	v->a[131735] = anon_sym_STAR_STAR;
	v->a[131736] = actions(6598);
	v->a[131737] = 22;
	v->a[131738] = anon_sym_PLUS_PLUS;
	v->a[131739] = anon_sym_DASH_DASH;
	small_parse_table_6587(v);
}

void	small_parse_table_6587(t_small_parse_table_array *v)
{
	v->a[131740] = anon_sym_PLUS_EQ;
	v->a[131741] = anon_sym_DASH_EQ;
	v->a[131742] = anon_sym_STAR_EQ;
	v->a[131743] = anon_sym_SLASH_EQ;
	v->a[131744] = anon_sym_PERCENT_EQ;
	v->a[131745] = anon_sym_STAR_STAR_EQ;
	v->a[131746] = anon_sym_LT_LT_EQ;
	v->a[131747] = anon_sym_GT_GT_EQ;
	v->a[131748] = anon_sym_AMP_EQ;
	v->a[131749] = anon_sym_CARET_EQ;
	v->a[131750] = anon_sym_PIPE_EQ;
	v->a[131751] = anon_sym_PIPE_PIPE;
	v->a[131752] = anon_sym_AMP_AMP;
	v->a[131753] = anon_sym_EQ_EQ;
	v->a[131754] = anon_sym_BANG_EQ;
	v->a[131755] = anon_sym_LT_EQ;
	v->a[131756] = anon_sym_GT_EQ;
	v->a[131757] = anon_sym_RPAREN;
	v->a[131758] = anon_sym_EQ_TILDE;
	v->a[131759] = anon_sym_QMARK;
	small_parse_table_6588(v);
}

void	small_parse_table_6588(t_small_parse_table_array *v)
{
	v->a[131760] = 3;
	v->a[131761] = actions(71);
	v->a[131762] = 1;
	v->a[131763] = sym_comment;
	v->a[131764] = actions(1316);
	v->a[131765] = 13;
	v->a[131766] = anon_sym_PIPE;
	v->a[131767] = anon_sym_LT;
	v->a[131768] = anon_sym_GT;
	v->a[131769] = anon_sym_LT_LT;
	v->a[131770] = anon_sym_AMP_GT;
	v->a[131771] = anon_sym_LT_AMP;
	v->a[131772] = anon_sym_GT_AMP;
	v->a[131773] = anon_sym_DOLLAR;
	v->a[131774] = aux_sym_number_token1;
	v->a[131775] = aux_sym_number_token2;
	v->a[131776] = anon_sym_DOLLAR_LPAREN;
	v->a[131777] = anon_sym_BQUOTE;
	v->a[131778] = sym_word;
	v->a[131779] = actions(1318);
	small_parse_table_6589(v);
}

void	small_parse_table_6589(t_small_parse_table_array *v)
{
	v->a[131780] = 27;
	v->a[131781] = sym_file_descriptor;
	v->a[131782] = sym__concat;
	v->a[131783] = sym_variable_name;
	v->a[131784] = sym_test_operator;
	v->a[131785] = sym__brace_start;
	v->a[131786] = anon_sym_LPAREN_LPAREN;
	v->a[131787] = anon_sym_PIPE_PIPE;
	v->a[131788] = anon_sym_AMP_AMP;
	v->a[131789] = anon_sym_GT_GT;
	v->a[131790] = anon_sym_PIPE_AMP;
	v->a[131791] = anon_sym_AMP_GT_GT;
	v->a[131792] = anon_sym_GT_PIPE;
	v->a[131793] = anon_sym_LT_AMP_DASH;
	v->a[131794] = anon_sym_GT_AMP_DASH;
	v->a[131795] = anon_sym_LT_LT_DASH;
	v->a[131796] = anon_sym_LT_LT_LT;
	v->a[131797] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131798] = anon_sym_DOLLAR_LBRACK;
	v->a[131799] = aux_sym_concatenation_token1;
	small_parse_table_6590(v);
}

/* EOF small_parse_table_1317.c */
