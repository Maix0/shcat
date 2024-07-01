/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_757.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3785(t_small_parse_table_array *v)
{
	v->a[75700] = 2;
	v->a[75701] = anon_sym_AMP_AMP;
	v->a[75702] = anon_sym_PIPE_PIPE;
	v->a[75703] = actions(2542);
	v->a[75704] = 2;
	v->a[75705] = anon_sym_LT_AMP_DASH;
	v->a[75706] = anon_sym_GT_AMP_DASH;
	v->a[75707] = state(1408);
	v->a[75708] = 3;
	v->a[75709] = sym_file_redirect;
	v->a[75710] = sym_heredoc_redirect;
	v->a[75711] = aux_sym_redirected_statement_repeat1;
	v->a[75712] = actions(2540);
	v->a[75713] = 6;
	v->a[75714] = anon_sym_LT;
	v->a[75715] = anon_sym_GT;
	v->a[75716] = anon_sym_GT_GT;
	v->a[75717] = anon_sym_LT_AMP;
	v->a[75718] = anon_sym_GT_AMP;
	v->a[75719] = anon_sym_GT_PIPE;
	small_parse_table_3786(v);
}

void	small_parse_table_3786(t_small_parse_table_array *v)
{
	v->a[75720] = 5;
	v->a[75721] = actions(870);
	v->a[75722] = 1;
	v->a[75723] = sym_comment;
	v->a[75724] = state(1505);
	v->a[75725] = 1;
	v->a[75726] = aux_sym_concatenation_repeat1;
	v->a[75727] = actions(2840);
	v->a[75728] = 2;
	v->a[75729] = sym__concat;
	v->a[75730] = aux_sym_concatenation_token1;
	v->a[75731] = actions(604);
	v->a[75732] = 6;
	v->a[75733] = anon_sym_PIPE;
	v->a[75734] = anon_sym_LT;
	v->a[75735] = anon_sym_GT;
	v->a[75736] = anon_sym_LT_AMP;
	v->a[75737] = anon_sym_GT_AMP;
	v->a[75738] = anon_sym_LT_LT;
	v->a[75739] = actions(602);
	small_parse_table_3787(v);
}

void	small_parse_table_3787(t_small_parse_table_array *v)
{
	v->a[75740] = 8;
	v->a[75741] = sym_file_descriptor;
	v->a[75742] = anon_sym_AMP_AMP;
	v->a[75743] = anon_sym_PIPE_PIPE;
	v->a[75744] = anon_sym_GT_GT;
	v->a[75745] = anon_sym_GT_PIPE;
	v->a[75746] = anon_sym_LT_AMP_DASH;
	v->a[75747] = anon_sym_GT_AMP_DASH;
	v->a[75748] = anon_sym_LT_LT_DASH;
	v->a[75749] = 10;
	v->a[75750] = actions(3);
	v->a[75751] = 1;
	v->a[75752] = sym_comment;
	v->a[75753] = actions(345);
	v->a[75754] = 1;
	v->a[75755] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75756] = actions(347);
	v->a[75757] = 1;
	v->a[75758] = anon_sym_DOLLAR;
	v->a[75759] = actions(349);
	small_parse_table_3788(v);
}

void	small_parse_table_3788(t_small_parse_table_array *v)
{
	v->a[75760] = 1;
	v->a[75761] = anon_sym_DQUOTE;
	v->a[75762] = actions(353);
	v->a[75763] = 1;
	v->a[75764] = anon_sym_DOLLAR_LBRACE;
	v->a[75765] = actions(355);
	v->a[75766] = 1;
	v->a[75767] = anon_sym_DOLLAR_LPAREN;
	v->a[75768] = actions(357);
	v->a[75769] = 1;
	v->a[75770] = anon_sym_BQUOTE;
	v->a[75771] = actions(2619);
	v->a[75772] = 1;
	v->a[75773] = sym__bare_dollar;
	v->a[75774] = actions(2615);
	v->a[75775] = 5;
	v->a[75776] = aux_sym_concatenation_token1;
	v->a[75777] = sym_raw_string;
	v->a[75778] = sym_number;
	v->a[75779] = sym__comment_word;
	small_parse_table_3789(v);
}

void	small_parse_table_3789(t_small_parse_table_array *v)
{
	v->a[75780] = sym_word;
	v->a[75781] = state(845);
	v->a[75782] = 5;
	v->a[75783] = sym_arithmetic_expansion;
	v->a[75784] = sym_string;
	v->a[75785] = sym_simple_expansion;
	v->a[75786] = sym_expansion;
	v->a[75787] = sym_command_substitution;
	v->a[75788] = 10;
	v->a[75789] = actions(3);
	v->a[75790] = 1;
	v->a[75791] = sym_comment;
	v->a[75792] = actions(59);
	v->a[75793] = 1;
	v->a[75794] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75795] = actions(61);
	v->a[75796] = 1;
	v->a[75797] = anon_sym_DOLLAR;
	v->a[75798] = actions(63);
	v->a[75799] = 1;
	small_parse_table_3790(v);
}

/* EOF small_parse_table_757.c */
