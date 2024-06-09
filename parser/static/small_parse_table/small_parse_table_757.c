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
	v->a[75700] = 1;
	v->a[75701] = sym_comment;
	v->a[75702] = actions(933);
	v->a[75703] = 1;
	v->a[75704] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75705] = actions(935);
	v->a[75706] = 1;
	v->a[75707] = anon_sym_DOLLAR;
	v->a[75708] = actions(937);
	v->a[75709] = 1;
	v->a[75710] = anon_sym_DQUOTE;
	v->a[75711] = actions(939);
	v->a[75712] = 1;
	v->a[75713] = aux_sym_number_token1;
	v->a[75714] = actions(941);
	v->a[75715] = 1;
	v->a[75716] = aux_sym_number_token2;
	v->a[75717] = actions(943);
	v->a[75718] = 1;
	v->a[75719] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3786(v);
}

void	small_parse_table_3786(t_small_parse_table_array *v)
{
	v->a[75720] = actions(945);
	v->a[75721] = 1;
	v->a[75722] = anon_sym_DOLLAR_LPAREN;
	v->a[75723] = actions(947);
	v->a[75724] = 1;
	v->a[75725] = anon_sym_BQUOTE;
	v->a[75726] = actions(3056);
	v->a[75727] = 1;
	v->a[75728] = aux_sym_heredoc_redirect_token1;
	v->a[75729] = state(1348);
	v->a[75730] = 1;
	v->a[75731] = aux_sym__heredoc_command;
	v->a[75732] = state(1832);
	v->a[75733] = 1;
	v->a[75734] = sym_concatenation;
	v->a[75735] = actions(921);
	v->a[75736] = 2;
	v->a[75737] = sym_raw_string;
	v->a[75738] = sym_word;
	v->a[75739] = state(1614);
	small_parse_table_3787(v);
}

void	small_parse_table_3787(t_small_parse_table_array *v)
{
	v->a[75740] = 6;
	v->a[75741] = sym_arithmetic_expansion;
	v->a[75742] = sym_string;
	v->a[75743] = sym_number;
	v->a[75744] = sym_simple_expansion;
	v->a[75745] = sym_expansion;
	v->a[75746] = sym_command_substitution;
	v->a[75747] = 7;
	v->a[75748] = actions(3);
	v->a[75749] = 1;
	v->a[75750] = sym_comment;
	v->a[75751] = actions(2468);
	v->a[75752] = 1;
	v->a[75753] = aux_sym_heredoc_redirect_token1;
	v->a[75754] = actions(2845);
	v->a[75755] = 1;
	v->a[75756] = sym_file_descriptor;
	v->a[75757] = actions(2757);
	v->a[75758] = 2;
	v->a[75759] = anon_sym_LT_AMP_DASH;
	small_parse_table_3788(v);
}

void	small_parse_table_3788(t_small_parse_table_array *v)
{
	v->a[75760] = anon_sym_GT_AMP_DASH;
	v->a[75761] = state(1345);
	v->a[75762] = 2;
	v->a[75763] = sym_file_redirect;
	v->a[75764] = aux_sym_redirected_statement_repeat2;
	v->a[75765] = actions(2466);
	v->a[75766] = 5;
	v->a[75767] = anon_sym_PIPE;
	v->a[75768] = anon_sym_AMP_AMP;
	v->a[75769] = anon_sym_PIPE_PIPE;
	v->a[75770] = anon_sym_LT_LT;
	v->a[75771] = anon_sym_LT_LT_DASH;
	v->a[75772] = actions(2755);
	v->a[75773] = 8;
	v->a[75774] = anon_sym_LT;
	v->a[75775] = anon_sym_GT;
	v->a[75776] = anon_sym_GT_GT;
	v->a[75777] = anon_sym_AMP_GT;
	v->a[75778] = anon_sym_AMP_GT_GT;
	v->a[75779] = anon_sym_LT_AMP;
	small_parse_table_3789(v);
}

void	small_parse_table_3789(t_small_parse_table_array *v)
{
	v->a[75780] = anon_sym_GT_AMP;
	v->a[75781] = anon_sym_GT_PIPE;
	v->a[75782] = 5;
	v->a[75783] = actions(1404);
	v->a[75784] = 1;
	v->a[75785] = sym_comment;
	v->a[75786] = state(1350);
	v->a[75787] = 1;
	v->a[75788] = aux_sym_concatenation_repeat1;
	v->a[75789] = actions(2901);
	v->a[75790] = 2;
	v->a[75791] = sym__concat;
	v->a[75792] = aux_sym_concatenation_token1;
	v->a[75793] = actions(567);
	v->a[75794] = 7;
	v->a[75795] = anon_sym_PIPE;
	v->a[75796] = anon_sym_LT;
	v->a[75797] = anon_sym_GT;
	v->a[75798] = anon_sym_AMP_GT;
	v->a[75799] = anon_sym_LT_AMP;
	small_parse_table_3790(v);
}

/* EOF small_parse_table_757.c */
