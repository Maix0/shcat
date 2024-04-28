/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1057.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5285(t_small_parse_table_array *v)
{
	v->a[105700] = 8;
	v->a[105701] = actions(3);
	v->a[105702] = 1;
	v->a[105703] = sym_comment;
	v->a[105704] = actions(5826);
	v->a[105705] = 1;
	v->a[105706] = aux_sym_heredoc_redirect_token1;
	v->a[105707] = actions(5828);
	v->a[105708] = 1;
	v->a[105709] = sym_file_descriptor;
	v->a[105710] = actions(6157);
	v->a[105711] = 1;
	v->a[105712] = anon_sym_RPAREN;
	v->a[105713] = actions(5831);
	v->a[105714] = 3;
	v->a[105715] = sym_variable_name;
	v->a[105716] = sym_test_operator;
	v->a[105717] = sym__brace_start;
	v->a[105718] = actions(5821);
	v->a[105719] = 9;
	small_parse_table_5286(v);
}

void	small_parse_table_5286(t_small_parse_table_array *v)
{
	v->a[105720] = anon_sym_SEMI;
	v->a[105721] = anon_sym_PIPE_PIPE;
	v->a[105722] = anon_sym_AMP_AMP;
	v->a[105723] = anon_sym_PIPE;
	v->a[105724] = anon_sym_AMP;
	v->a[105725] = anon_sym_LT_LT;
	v->a[105726] = anon_sym_SEMI_SEMI;
	v->a[105727] = anon_sym_PIPE_AMP;
	v->a[105728] = anon_sym_LT_LT_DASH;
	v->a[105729] = actions(5823);
	v->a[105730] = 11;
	v->a[105731] = anon_sym_LT;
	v->a[105732] = anon_sym_GT;
	v->a[105733] = anon_sym_GT_GT;
	v->a[105734] = anon_sym_AMP_GT;
	v->a[105735] = anon_sym_AMP_GT_GT;
	v->a[105736] = anon_sym_LT_AMP;
	v->a[105737] = anon_sym_GT_AMP;
	v->a[105738] = anon_sym_GT_PIPE;
	v->a[105739] = anon_sym_LT_AMP_DASH;
	small_parse_table_5287(v);
}

void	small_parse_table_5287(t_small_parse_table_array *v)
{
	v->a[105740] = anon_sym_GT_AMP_DASH;
	v->a[105741] = anon_sym_LT_LT_LT;
	v->a[105742] = actions(5819);
	v->a[105743] = 17;
	v->a[105744] = anon_sym_LPAREN_LPAREN;
	v->a[105745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105746] = anon_sym_DOLLAR_LBRACK;
	v->a[105747] = anon_sym_DOLLAR;
	v->a[105748] = sym__special_character;
	v->a[105749] = anon_sym_DQUOTE;
	v->a[105750] = sym_raw_string;
	v->a[105751] = sym_ansi_c_string;
	v->a[105752] = aux_sym_number_token1;
	v->a[105753] = aux_sym_number_token2;
	v->a[105754] = anon_sym_DOLLAR_LBRACE;
	v->a[105755] = anon_sym_DOLLAR_LPAREN;
	v->a[105756] = anon_sym_BQUOTE;
	v->a[105757] = anon_sym_DOLLAR_BQUOTE;
	v->a[105758] = anon_sym_LT_LPAREN;
	v->a[105759] = anon_sym_GT_LPAREN;
	small_parse_table_5288(v);
}

void	small_parse_table_5288(t_small_parse_table_array *v)
{
	v->a[105760] = sym_word;
	v->a[105761] = 3;
	v->a[105762] = actions(3);
	v->a[105763] = 1;
	v->a[105764] = sym_comment;
	v->a[105765] = actions(1354);
	v->a[105766] = 6;
	v->a[105767] = sym_file_descriptor;
	v->a[105768] = sym__concat;
	v->a[105769] = sym_test_operator;
	v->a[105770] = sym__brace_start;
	v->a[105771] = ts_builtin_sym_end;
	v->a[105772] = aux_sym_heredoc_redirect_token1;
	v->a[105773] = actions(1352);
	v->a[105774] = 37;
	v->a[105775] = anon_sym_LPAREN_LPAREN;
	v->a[105776] = anon_sym_SEMI;
	v->a[105777] = anon_sym_PIPE_PIPE;
	v->a[105778] = anon_sym_AMP_AMP;
	v->a[105779] = anon_sym_PIPE;
	small_parse_table_5289(v);
}

void	small_parse_table_5289(t_small_parse_table_array *v)
{
	v->a[105780] = anon_sym_AMP;
	v->a[105781] = anon_sym_LT;
	v->a[105782] = anon_sym_GT;
	v->a[105783] = anon_sym_LT_LT;
	v->a[105784] = anon_sym_GT_GT;
	v->a[105785] = anon_sym_SEMI_SEMI;
	v->a[105786] = anon_sym_PIPE_AMP;
	v->a[105787] = anon_sym_AMP_GT;
	v->a[105788] = anon_sym_AMP_GT_GT;
	v->a[105789] = anon_sym_LT_AMP;
	v->a[105790] = anon_sym_GT_AMP;
	v->a[105791] = anon_sym_GT_PIPE;
	v->a[105792] = anon_sym_LT_AMP_DASH;
	v->a[105793] = anon_sym_GT_AMP_DASH;
	v->a[105794] = anon_sym_LT_LT_DASH;
	v->a[105795] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105796] = anon_sym_DOLLAR_LBRACK;
	v->a[105797] = aux_sym_concatenation_token1;
	v->a[105798] = anon_sym_DOLLAR;
	v->a[105799] = sym__special_character;
	small_parse_table_5290(v);
}

/* EOF small_parse_table_1057.c */
