/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1007.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5035(t_small_parse_table_array *v)
{
	v->a[100700] = anon_sym_AMP_GT;
	v->a[100701] = anon_sym_AMP_GT_GT;
	v->a[100702] = anon_sym_LT_AMP;
	v->a[100703] = anon_sym_GT_AMP;
	v->a[100704] = anon_sym_GT_PIPE;
	v->a[100705] = anon_sym_LT_AMP_DASH;
	v->a[100706] = anon_sym_GT_AMP_DASH;
	v->a[100707] = anon_sym_LT_LT;
	v->a[100708] = anon_sym_LT_LT_DASH;
	v->a[100709] = anon_sym_AMP;
	v->a[100710] = anon_sym_SEMI;
	v->a[100711] = 19;
	v->a[100712] = actions(3);
	v->a[100713] = 1;
	v->a[100714] = sym_comment;
	v->a[100715] = actions(5334);
	v->a[100716] = 1;
	v->a[100717] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100718] = actions(5336);
	v->a[100719] = 1;
	small_parse_table_5036(v);
}

void	small_parse_table_5036(t_small_parse_table_array *v)
{
	v->a[100720] = anon_sym_DOLLAR;
	v->a[100721] = actions(5340);
	v->a[100722] = 1;
	v->a[100723] = anon_sym_DQUOTE;
	v->a[100724] = actions(5344);
	v->a[100725] = 1;
	v->a[100726] = aux_sym_number_token1;
	v->a[100727] = actions(5346);
	v->a[100728] = 1;
	v->a[100729] = aux_sym_number_token2;
	v->a[100730] = actions(5348);
	v->a[100731] = 1;
	v->a[100732] = anon_sym_DOLLAR_LBRACE;
	v->a[100733] = actions(5350);
	v->a[100734] = 1;
	v->a[100735] = anon_sym_DOLLAR_LPAREN;
	v->a[100736] = actions(5352);
	v->a[100737] = 1;
	v->a[100738] = anon_sym_BQUOTE;
	v->a[100739] = actions(5354);
	small_parse_table_5037(v);
}

void	small_parse_table_5037(t_small_parse_table_array *v)
{
	v->a[100740] = 1;
	v->a[100741] = anon_sym_DOLLAR_BQUOTE;
	v->a[100742] = actions(5356);
	v->a[100743] = 1;
	v->a[100744] = sym__comment_word;
	v->a[100745] = actions(5358);
	v->a[100746] = 1;
	v->a[100747] = sym__empty_value;
	v->a[100748] = actions(5360);
	v->a[100749] = 1;
	v->a[100750] = sym__brace_start;
	v->a[100751] = actions(5755);
	v->a[100752] = 1;
	v->a[100753] = sym_word;
	v->a[100754] = actions(5757);
	v->a[100755] = 1;
	v->a[100756] = sym__special_character;
	v->a[100757] = state(1229);
	v->a[100758] = 1;
	v->a[100759] = aux_sym__literal_repeat1;
	small_parse_table_5038(v);
}

void	small_parse_table_5038(t_small_parse_table_array *v)
{
	v->a[100760] = state(1262);
	v->a[100761] = 1;
	v->a[100762] = sym_concatenation;
	v->a[100763] = actions(5759);
	v->a[100764] = 2;
	v->a[100765] = sym_test_operator;
	v->a[100766] = sym_raw_string;
	v->a[100767] = state(1096);
	v->a[100768] = 7;
	v->a[100769] = sym_arithmetic_expansion;
	v->a[100770] = sym_brace_expression;
	v->a[100771] = sym_string;
	v->a[100772] = sym_number;
	v->a[100773] = sym_simple_expansion;
	v->a[100774] = sym_expansion;
	v->a[100775] = sym_command_substitution;
	v->a[100776] = 11;
	v->a[100777] = actions(3);
	v->a[100778] = 1;
	v->a[100779] = sym_comment;
	small_parse_table_5039(v);
}

void	small_parse_table_5039(t_small_parse_table_array *v)
{
	v->a[100780] = actions(2514);
	v->a[100781] = 1;
	v->a[100782] = anon_sym_RPAREN;
	v->a[100783] = actions(2743);
	v->a[100784] = 1;
	v->a[100785] = aux_sym_heredoc_redirect_token1;
	v->a[100786] = actions(5680);
	v->a[100787] = 1;
	v->a[100788] = sym_file_descriptor;
	v->a[100789] = actions(2516);
	v->a[100790] = 2;
	v->a[100791] = anon_sym_PIPE;
	v->a[100792] = anon_sym_PIPE_AMP;
	v->a[100793] = actions(2945);
	v->a[100794] = 2;
	v->a[100795] = anon_sym_LT_LT;
	v->a[100796] = anon_sym_LT_LT_DASH;
	v->a[100797] = actions(2960);
	v->a[100798] = 2;
	v->a[100799] = anon_sym_AMP_AMP;
	small_parse_table_5040(v);
}

/* EOF small_parse_table_1007.c */
