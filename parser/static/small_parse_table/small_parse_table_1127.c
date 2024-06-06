/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1127.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5635(t_small_parse_table_array *v)
{
	v->a[112700] = anon_sym_AMP;
	v->a[112701] = anon_sym_SEMI;
	v->a[112702] = 17;
	v->a[112703] = actions(57);
	v->a[112704] = 1;
	v->a[112705] = sym_comment;
	v->a[112706] = actions(6390);
	v->a[112707] = 1;
	v->a[112708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112709] = actions(6392);
	v->a[112710] = 1;
	v->a[112711] = anon_sym_DOLLAR;
	v->a[112712] = actions(6394);
	v->a[112713] = 1;
	v->a[112714] = sym__special_character;
	v->a[112715] = actions(6396);
	v->a[112716] = 1;
	v->a[112717] = anon_sym_DQUOTE;
	v->a[112718] = actions(6400);
	v->a[112719] = 1;
	small_parse_table_5636(v);
}

void	small_parse_table_5636(t_small_parse_table_array *v)
{
	v->a[112720] = aux_sym_number_token1;
	v->a[112721] = actions(6402);
	v->a[112722] = 1;
	v->a[112723] = aux_sym_number_token2;
	v->a[112724] = actions(6404);
	v->a[112725] = 1;
	v->a[112726] = anon_sym_DOLLAR_LBRACE;
	v->a[112727] = actions(6406);
	v->a[112728] = 1;
	v->a[112729] = anon_sym_DOLLAR_LPAREN;
	v->a[112730] = actions(6408);
	v->a[112731] = 1;
	v->a[112732] = anon_sym_BQUOTE;
	v->a[112733] = actions(6410);
	v->a[112734] = 1;
	v->a[112735] = anon_sym_DOLLAR_BQUOTE;
	v->a[112736] = actions(6412);
	v->a[112737] = 1;
	v->a[112738] = sym__brace_start;
	v->a[112739] = actions(6471);
	small_parse_table_5637(v);
}

void	small_parse_table_5637(t_small_parse_table_array *v)
{
	v->a[112740] = 1;
	v->a[112741] = sym_word;
	v->a[112742] = state(3241);
	v->a[112743] = 1;
	v->a[112744] = aux_sym__literal_repeat1;
	v->a[112745] = state(3413);
	v->a[112746] = 1;
	v->a[112747] = sym_concatenation;
	v->a[112748] = actions(6473);
	v->a[112749] = 2;
	v->a[112750] = sym_test_operator;
	v->a[112751] = sym_raw_string;
	v->a[112752] = state(3236);
	v->a[112753] = 7;
	v->a[112754] = sym_arithmetic_expansion;
	v->a[112755] = sym_brace_expression;
	v->a[112756] = sym_string;
	v->a[112757] = sym_number;
	v->a[112758] = sym_simple_expansion;
	v->a[112759] = sym_expansion;
	small_parse_table_5638(v);
}

void	small_parse_table_5638(t_small_parse_table_array *v)
{
	v->a[112760] = sym_command_substitution;
	v->a[112761] = 3;
	v->a[112762] = actions(3);
	v->a[112763] = 1;
	v->a[112764] = sym_comment;
	v->a[112765] = actions(6185);
	v->a[112766] = 2;
	v->a[112767] = sym_file_descriptor;
	v->a[112768] = aux_sym_heredoc_redirect_token1;
	v->a[112769] = actions(6187);
	v->a[112770] = 21;
	v->a[112771] = anon_sym_PIPE;
	v->a[112772] = anon_sym_SEMI_SEMI;
	v->a[112773] = anon_sym_SEMI_AMP;
	v->a[112774] = anon_sym_SEMI_SEMI_AMP;
	v->a[112775] = anon_sym_PIPE_AMP;
	v->a[112776] = anon_sym_AMP_AMP;
	v->a[112777] = anon_sym_PIPE_PIPE;
	v->a[112778] = anon_sym_LT;
	v->a[112779] = anon_sym_GT;
	small_parse_table_5639(v);
}

void	small_parse_table_5639(t_small_parse_table_array *v)
{
	v->a[112780] = anon_sym_GT_GT;
	v->a[112781] = anon_sym_AMP_GT;
	v->a[112782] = anon_sym_AMP_GT_GT;
	v->a[112783] = anon_sym_LT_AMP;
	v->a[112784] = anon_sym_GT_AMP;
	v->a[112785] = anon_sym_GT_PIPE;
	v->a[112786] = anon_sym_LT_AMP_DASH;
	v->a[112787] = anon_sym_GT_AMP_DASH;
	v->a[112788] = anon_sym_LT_LT;
	v->a[112789] = anon_sym_LT_LT_DASH;
	v->a[112790] = anon_sym_AMP;
	v->a[112791] = anon_sym_SEMI;
	v->a[112792] = 16;
	v->a[112793] = actions(3);
	v->a[112794] = 1;
	v->a[112795] = sym_comment;
	v->a[112796] = actions(3883);
	v->a[112797] = 1;
	v->a[112798] = anon_sym_DOLLAR;
	v->a[112799] = actions(3889);
	small_parse_table_5640(v);
}

/* EOF small_parse_table_1127.c */
