/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_190.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_950(t_small_parse_table_array *v)
{
	v->a[19000] = sym__bare_dollar;
	v->a[19001] = actions(2819);
	v->a[19002] = 1;
	v->a[19003] = sym__brace_start;
	v->a[19004] = state(511);
	v->a[19005] = 1;
	v->a[19006] = aux_sym_command_repeat2;
	v->a[19007] = state(1645);
	v->a[19008] = 1;
	v->a[19009] = aux_sym__literal_repeat1;
	v->a[19010] = state(1676);
	v->a[19011] = 1;
	v->a[19012] = sym_concatenation;
	v->a[19013] = actions(2795);
	v->a[19014] = 2;
	v->a[19015] = sym_test_operator;
	v->a[19016] = sym_raw_string;
	v->a[19017] = actions(1193);
	v->a[19018] = 7;
	v->a[19019] = anon_sym_PIPE;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = anon_sym_LT;
	v->a[19021] = anon_sym_GT;
	v->a[19022] = anon_sym_AMP_GT;
	v->a[19023] = anon_sym_LT_AMP;
	v->a[19024] = anon_sym_GT_AMP;
	v->a[19025] = anon_sym_LT_LT;
	v->a[19026] = state(1452);
	v->a[19027] = 7;
	v->a[19028] = sym_arithmetic_expansion;
	v->a[19029] = sym_brace_expression;
	v->a[19030] = sym_string;
	v->a[19031] = sym_number;
	v->a[19032] = sym_simple_expansion;
	v->a[19033] = sym_expansion;
	v->a[19034] = sym_command_substitution;
	v->a[19035] = actions(1195);
	v->a[19036] = 10;
	v->a[19037] = sym_file_descriptor;
	v->a[19038] = anon_sym_PIPE_AMP;
	v->a[19039] = anon_sym_AMP_AMP;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = anon_sym_PIPE_PIPE;
	v->a[19041] = anon_sym_GT_GT;
	v->a[19042] = anon_sym_AMP_GT_GT;
	v->a[19043] = anon_sym_GT_PIPE;
	v->a[19044] = anon_sym_LT_AMP_DASH;
	v->a[19045] = anon_sym_GT_AMP_DASH;
	v->a[19046] = anon_sym_LT_LT_DASH;
	v->a[19047] = 6;
	v->a[19048] = actions(3);
	v->a[19049] = 1;
	v->a[19050] = sym_comment;
	v->a[19051] = actions(2822);
	v->a[19052] = 1;
	v->a[19053] = aux_sym_concatenation_token1;
	v->a[19054] = actions(2824);
	v->a[19055] = 1;
	v->a[19056] = sym__concat;
	v->a[19057] = state(564);
	v->a[19058] = 1;
	v->a[19059] = aux_sym_concatenation_repeat1;
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = actions(2690);
	v->a[19061] = 5;
	v->a[19062] = sym_file_descriptor;
	v->a[19063] = sym_variable_name;
	v->a[19064] = sym_test_operator;
	v->a[19065] = sym__brace_start;
	v->a[19066] = aux_sym_heredoc_redirect_token1;
	v->a[19067] = actions(2688);
	v->a[19068] = 34;
	v->a[19069] = anon_sym_esac;
	v->a[19070] = anon_sym_PIPE;
	v->a[19071] = anon_sym_SEMI_SEMI;
	v->a[19072] = anon_sym_SEMI_AMP;
	v->a[19073] = anon_sym_SEMI_SEMI_AMP;
	v->a[19074] = anon_sym_PIPE_AMP;
	v->a[19075] = anon_sym_AMP_AMP;
	v->a[19076] = anon_sym_PIPE_PIPE;
	v->a[19077] = anon_sym_LT;
	v->a[19078] = anon_sym_GT;
	v->a[19079] = anon_sym_GT_GT;
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = anon_sym_AMP_GT;
	v->a[19081] = anon_sym_AMP_GT_GT;
	v->a[19082] = anon_sym_LT_AMP;
	v->a[19083] = anon_sym_GT_AMP;
	v->a[19084] = anon_sym_GT_PIPE;
	v->a[19085] = anon_sym_LT_AMP_DASH;
	v->a[19086] = anon_sym_GT_AMP_DASH;
	v->a[19087] = anon_sym_LT_LT;
	v->a[19088] = anon_sym_LT_LT_DASH;
	v->a[19089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19090] = anon_sym_AMP;
	v->a[19091] = anon_sym_DOLLAR;
	v->a[19092] = sym__special_character;
	v->a[19093] = anon_sym_DQUOTE;
	v->a[19094] = sym_raw_string;
	v->a[19095] = aux_sym_number_token1;
	v->a[19096] = aux_sym_number_token2;
	v->a[19097] = anon_sym_DOLLAR_LBRACE;
	v->a[19098] = anon_sym_DOLLAR_LPAREN;
	v->a[19099] = anon_sym_BQUOTE;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
