/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1207.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6035(t_small_parse_table_array *v)
{
	v->a[120700] = aux_sym_number_token1;
	v->a[120701] = aux_sym_number_token2;
	v->a[120702] = anon_sym_DOLLAR_LBRACE;
	v->a[120703] = anon_sym_DOLLAR_LPAREN;
	v->a[120704] = anon_sym_BQUOTE;
	v->a[120705] = anon_sym_DOLLAR_BQUOTE;
	v->a[120706] = anon_sym_LT_LPAREN;
	v->a[120707] = anon_sym_GT_LPAREN;
	v->a[120708] = sym_word;
	v->a[120709] = 3;
	v->a[120710] = actions(71);
	v->a[120711] = 1;
	v->a[120712] = sym_comment;
	v->a[120713] = actions(1356);
	v->a[120714] = 14;
	v->a[120715] = anon_sym_EQ;
	v->a[120716] = anon_sym_PIPE;
	v->a[120717] = anon_sym_CARET;
	v->a[120718] = anon_sym_AMP;
	v->a[120719] = anon_sym_LT;
	small_parse_table_6036(v);
}

void	small_parse_table_6036(t_small_parse_table_array *v)
{
	v->a[120720] = anon_sym_GT;
	v->a[120721] = anon_sym_LT_LT;
	v->a[120722] = anon_sym_GT_GT;
	v->a[120723] = anon_sym_PLUS;
	v->a[120724] = anon_sym_DASH;
	v->a[120725] = anon_sym_STAR;
	v->a[120726] = anon_sym_SLASH;
	v->a[120727] = anon_sym_PERCENT;
	v->a[120728] = anon_sym_STAR_STAR;
	v->a[120729] = actions(1358);
	v->a[120730] = 28;
	v->a[120731] = sym__concat;
	v->a[120732] = sym_test_operator;
	v->a[120733] = anon_sym_RPAREN_RPAREN;
	v->a[120734] = anon_sym_COMMA;
	v->a[120735] = anon_sym_PLUS_PLUS;
	v->a[120736] = anon_sym_DASH_DASH;
	v->a[120737] = anon_sym_PLUS_EQ;
	v->a[120738] = anon_sym_DASH_EQ;
	v->a[120739] = anon_sym_STAR_EQ;
	small_parse_table_6037(v);
}

void	small_parse_table_6037(t_small_parse_table_array *v)
{
	v->a[120740] = anon_sym_SLASH_EQ;
	v->a[120741] = anon_sym_PERCENT_EQ;
	v->a[120742] = anon_sym_STAR_STAR_EQ;
	v->a[120743] = anon_sym_LT_LT_EQ;
	v->a[120744] = anon_sym_GT_GT_EQ;
	v->a[120745] = anon_sym_AMP_EQ;
	v->a[120746] = anon_sym_CARET_EQ;
	v->a[120747] = anon_sym_PIPE_EQ;
	v->a[120748] = anon_sym_PIPE_PIPE;
	v->a[120749] = anon_sym_AMP_AMP;
	v->a[120750] = anon_sym_EQ_EQ;
	v->a[120751] = anon_sym_BANG_EQ;
	v->a[120752] = anon_sym_LT_EQ;
	v->a[120753] = anon_sym_GT_EQ;
	v->a[120754] = anon_sym_RBRACK_RBRACK;
	v->a[120755] = anon_sym_EQ_TILDE;
	v->a[120756] = anon_sym_QMARK;
	v->a[120757] = anon_sym_COLON;
	v->a[120758] = aux_sym_concatenation_token1;
	v->a[120759] = 5;
	small_parse_table_6038(v);
}

void	small_parse_table_6038(t_small_parse_table_array *v)
{
	v->a[120760] = actions(71);
	v->a[120761] = 1;
	v->a[120762] = sym_comment;
	v->a[120763] = state(2285);
	v->a[120764] = 1;
	v->a[120765] = aux_sym_concatenation_repeat1;
	v->a[120766] = actions(6441);
	v->a[120767] = 2;
	v->a[120768] = sym__concat;
	v->a[120769] = aux_sym_concatenation_token1;
	v->a[120770] = actions(4467);
	v->a[120771] = 14;
	v->a[120772] = anon_sym_PIPE;
	v->a[120773] = anon_sym_LT;
	v->a[120774] = anon_sym_GT;
	v->a[120775] = anon_sym_LT_LT;
	v->a[120776] = anon_sym_AMP_GT;
	v->a[120777] = anon_sym_LT_AMP;
	v->a[120778] = anon_sym_GT_AMP;
	v->a[120779] = anon_sym_DOLLAR;
	small_parse_table_6039(v);
}

void	small_parse_table_6039(t_small_parse_table_array *v)
{
	v->a[120780] = sym__special_character;
	v->a[120781] = aux_sym_number_token1;
	v->a[120782] = aux_sym_number_token2;
	v->a[120783] = anon_sym_DOLLAR_LPAREN;
	v->a[120784] = anon_sym_BQUOTE;
	v->a[120785] = sym_word;
	v->a[120786] = actions(4469);
	v->a[120787] = 25;
	v->a[120788] = sym_file_descriptor;
	v->a[120789] = sym_variable_name;
	v->a[120790] = sym_test_operator;
	v->a[120791] = sym__brace_start;
	v->a[120792] = anon_sym_LPAREN_LPAREN;
	v->a[120793] = anon_sym_PIPE_PIPE;
	v->a[120794] = anon_sym_AMP_AMP;
	v->a[120795] = anon_sym_GT_GT;
	v->a[120796] = anon_sym_PIPE_AMP;
	v->a[120797] = anon_sym_RBRACK;
	v->a[120798] = anon_sym_AMP_GT_GT;
	v->a[120799] = anon_sym_GT_PIPE;
	small_parse_table_6040(v);
}

/* EOF small_parse_table_1207.c */
