/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_758.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3790(t_small_parse_table_array *v)
{
	v->a[75800] = aux_sym_concatenation_repeat1;
	v->a[75801] = actions(961);
	v->a[75802] = 2;
	v->a[75803] = sym_file_descriptor;
	v->a[75804] = aux_sym_heredoc_redirect_token1;
	v->a[75805] = actions(957);
	v->a[75806] = 15;
	v->a[75807] = anon_sym_PIPE;
	v->a[75808] = anon_sym_AMP_AMP;
	v->a[75809] = anon_sym_PIPE_PIPE;
	v->a[75810] = anon_sym_LT;
	v->a[75811] = anon_sym_GT;
	v->a[75812] = anon_sym_GT_GT;
	v->a[75813] = anon_sym_AMP_GT;
	v->a[75814] = anon_sym_AMP_GT_GT;
	v->a[75815] = anon_sym_LT_AMP;
	v->a[75816] = anon_sym_GT_AMP;
	v->a[75817] = anon_sym_GT_PIPE;
	v->a[75818] = anon_sym_LT_AMP_DASH;
	v->a[75819] = anon_sym_GT_AMP_DASH;
	small_parse_table_3791(v);
}

void	small_parse_table_3791(t_small_parse_table_array *v)
{
	v->a[75820] = anon_sym_LT_LT;
	v->a[75821] = anon_sym_LT_LT_DASH;
	v->a[75822] = 11;
	v->a[75823] = actions(3);
	v->a[75824] = 1;
	v->a[75825] = sym_comment;
	v->a[75826] = actions(2533);
	v->a[75827] = 1;
	v->a[75828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75829] = actions(2536);
	v->a[75830] = 1;
	v->a[75831] = anon_sym_DOLLAR;
	v->a[75832] = actions(2539);
	v->a[75833] = 1;
	v->a[75834] = anon_sym_DQUOTE;
	v->a[75835] = actions(2542);
	v->a[75836] = 1;
	v->a[75837] = anon_sym_DOLLAR_LBRACE;
	v->a[75838] = actions(2545);
	v->a[75839] = 1;
	small_parse_table_3792(v);
}

void	small_parse_table_3792(t_small_parse_table_array *v)
{
	v->a[75840] = anon_sym_DOLLAR_LPAREN;
	v->a[75841] = actions(2548);
	v->a[75842] = 1;
	v->a[75843] = anon_sym_BQUOTE;
	v->a[75844] = state(1402);
	v->a[75845] = 2;
	v->a[75846] = sym_concatenation;
	v->a[75847] = aux_sym_for_statement_repeat1;
	v->a[75848] = actions(2530);
	v->a[75849] = 3;
	v->a[75850] = sym_raw_string;
	v->a[75851] = sym_number;
	v->a[75852] = sym_word;
	v->a[75853] = actions(516);
	v->a[75854] = 4;
	v->a[75855] = anon_sym_SEMI_SEMI;
	v->a[75856] = aux_sym_heredoc_redirect_token1;
	v->a[75857] = anon_sym_AMP;
	v->a[75858] = anon_sym_SEMI;
	v->a[75859] = state(1669);
	small_parse_table_3793(v);
}

void	small_parse_table_3793(t_small_parse_table_array *v)
{
	v->a[75860] = 5;
	v->a[75861] = sym_arithmetic_expansion;
	v->a[75862] = sym_string;
	v->a[75863] = sym_simple_expansion;
	v->a[75864] = sym_expansion;
	v->a[75865] = sym_command_substitution;
	v->a[75866] = 5;
	v->a[75867] = actions(3);
	v->a[75868] = 1;
	v->a[75869] = sym_comment;
	v->a[75870] = actions(2551);
	v->a[75871] = 1;
	v->a[75872] = sym_variable_name;
	v->a[75873] = actions(2057);
	v->a[75874] = 2;
	v->a[75875] = sym_file_descriptor;
	v->a[75876] = aux_sym_heredoc_redirect_token1;
	v->a[75877] = state(1403);
	v->a[75878] = 2;
	v->a[75879] = sym_variable_assignment;
	small_parse_table_3794(v);
}

void	small_parse_table_3794(t_small_parse_table_array *v)
{
	v->a[75880] = aux_sym__variable_assignments_repeat1;
	v->a[75881] = actions(2055);
	v->a[75882] = 15;
	v->a[75883] = anon_sym_PIPE;
	v->a[75884] = anon_sym_AMP_AMP;
	v->a[75885] = anon_sym_PIPE_PIPE;
	v->a[75886] = anon_sym_LT;
	v->a[75887] = anon_sym_GT;
	v->a[75888] = anon_sym_GT_GT;
	v->a[75889] = anon_sym_AMP_GT;
	v->a[75890] = anon_sym_AMP_GT_GT;
	v->a[75891] = anon_sym_LT_AMP;
	v->a[75892] = anon_sym_GT_AMP;
	v->a[75893] = anon_sym_GT_PIPE;
	v->a[75894] = anon_sym_LT_AMP_DASH;
	v->a[75895] = anon_sym_GT_AMP_DASH;
	v->a[75896] = anon_sym_LT_LT;
	v->a[75897] = anon_sym_LT_LT_DASH;
	v->a[75898] = 5;
	v->a[75899] = actions(3);
	small_parse_table_3795(v);
}

/* EOF small_parse_table_758.c */
