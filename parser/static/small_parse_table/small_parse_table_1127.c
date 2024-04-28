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
	v->a[112700] = sym_brace_expression;
	v->a[112701] = sym_string;
	v->a[112702] = sym_translated_string;
	v->a[112703] = sym_number;
	v->a[112704] = sym_simple_expansion;
	v->a[112705] = sym_expansion;
	v->a[112706] = sym_command_substitution;
	v->a[112707] = sym_process_substitution;
	v->a[112708] = 8;
	v->a[112709] = actions(3);
	v->a[112710] = 1;
	v->a[112711] = sym_comment;
	v->a[112712] = actions(5826);
	v->a[112713] = 1;
	v->a[112714] = aux_sym_heredoc_redirect_token1;
	v->a[112715] = actions(5828);
	v->a[112716] = 1;
	v->a[112717] = sym_file_descriptor;
	v->a[112718] = actions(6350);
	v->a[112719] = 1;
	small_parse_table_5636(v);
}

void	small_parse_table_5636(t_small_parse_table_array *v)
{
	v->a[112720] = anon_sym_RPAREN;
	v->a[112721] = actions(5831);
	v->a[112722] = 3;
	v->a[112723] = sym_variable_name;
	v->a[112724] = sym_test_operator;
	v->a[112725] = sym__brace_start;
	v->a[112726] = actions(5821);
	v->a[112727] = 9;
	v->a[112728] = anon_sym_SEMI;
	v->a[112729] = anon_sym_PIPE_PIPE;
	v->a[112730] = anon_sym_AMP_AMP;
	v->a[112731] = anon_sym_PIPE;
	v->a[112732] = anon_sym_AMP;
	v->a[112733] = anon_sym_LT_LT;
	v->a[112734] = anon_sym_SEMI_SEMI;
	v->a[112735] = anon_sym_PIPE_AMP;
	v->a[112736] = anon_sym_LT_LT_DASH;
	v->a[112737] = actions(5823);
	v->a[112738] = 11;
	v->a[112739] = anon_sym_LT;
	small_parse_table_5637(v);
}

void	small_parse_table_5637(t_small_parse_table_array *v)
{
	v->a[112740] = anon_sym_GT;
	v->a[112741] = anon_sym_GT_GT;
	v->a[112742] = anon_sym_AMP_GT;
	v->a[112743] = anon_sym_AMP_GT_GT;
	v->a[112744] = anon_sym_LT_AMP;
	v->a[112745] = anon_sym_GT_AMP;
	v->a[112746] = anon_sym_GT_PIPE;
	v->a[112747] = anon_sym_LT_AMP_DASH;
	v->a[112748] = anon_sym_GT_AMP_DASH;
	v->a[112749] = anon_sym_LT_LT_LT;
	v->a[112750] = actions(5819);
	v->a[112751] = 17;
	v->a[112752] = anon_sym_LPAREN_LPAREN;
	v->a[112753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112754] = anon_sym_DOLLAR_LBRACK;
	v->a[112755] = anon_sym_DOLLAR;
	v->a[112756] = sym__special_character;
	v->a[112757] = anon_sym_DQUOTE;
	v->a[112758] = sym_raw_string;
	v->a[112759] = sym_ansi_c_string;
	small_parse_table_5638(v);
}

void	small_parse_table_5638(t_small_parse_table_array *v)
{
	v->a[112760] = aux_sym_number_token1;
	v->a[112761] = aux_sym_number_token2;
	v->a[112762] = anon_sym_DOLLAR_LBRACE;
	v->a[112763] = anon_sym_DOLLAR_LPAREN;
	v->a[112764] = anon_sym_BQUOTE;
	v->a[112765] = anon_sym_DOLLAR_BQUOTE;
	v->a[112766] = anon_sym_LT_LPAREN;
	v->a[112767] = anon_sym_GT_LPAREN;
	v->a[112768] = sym_word;
	v->a[112769] = 5;
	v->a[112770] = actions(3);
	v->a[112771] = 1;
	v->a[112772] = sym_comment;
	v->a[112773] = actions(6353);
	v->a[112774] = 1;
	v->a[112775] = sym__special_character;
	v->a[112776] = state(2254);
	v->a[112777] = 1;
	v->a[112778] = aux_sym__literal_repeat1;
	v->a[112779] = actions(5478);
	small_parse_table_5639(v);
}

void	small_parse_table_5639(t_small_parse_table_array *v)
{
	v->a[112780] = 5;
	v->a[112781] = sym_file_descriptor;
	v->a[112782] = sym_test_operator;
	v->a[112783] = sym__brace_start;
	v->a[112784] = ts_builtin_sym_end;
	v->a[112785] = aux_sym_heredoc_redirect_token1;
	v->a[112786] = actions(5476);
	v->a[112787] = 36;
	v->a[112788] = anon_sym_LPAREN_LPAREN;
	v->a[112789] = anon_sym_SEMI;
	v->a[112790] = anon_sym_PIPE_PIPE;
	v->a[112791] = anon_sym_AMP_AMP;
	v->a[112792] = anon_sym_PIPE;
	v->a[112793] = anon_sym_AMP;
	v->a[112794] = anon_sym_LT;
	v->a[112795] = anon_sym_GT;
	v->a[112796] = anon_sym_LT_LT;
	v->a[112797] = anon_sym_GT_GT;
	v->a[112798] = anon_sym_SEMI_SEMI;
	v->a[112799] = anon_sym_PIPE_AMP;
	small_parse_table_5640(v);
}

/* EOF small_parse_table_1127.c */
