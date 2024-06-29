/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_730.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3650(t_small_parse_table_array *v)
{
	v->a[73000] = sym_concatenation;
	v->a[73001] = sym__extglob_blob;
	v->a[73002] = actions(1875);
	v->a[73003] = 3;
	v->a[73004] = sym_raw_string;
	v->a[73005] = sym_number;
	v->a[73006] = sym_word;
	v->a[73007] = state(2004);
	v->a[73008] = 5;
	v->a[73009] = sym_arithmetic_expansion;
	v->a[73010] = sym_string;
	v->a[73011] = sym_simple_expansion;
	v->a[73012] = sym_expansion;
	v->a[73013] = sym_command_substitution;
	v->a[73014] = 15;
	v->a[73015] = actions(3);
	v->a[73016] = 1;
	v->a[73017] = sym_comment;
	v->a[73018] = actions(1879);
	v->a[73019] = 1;
	small_parse_table_3651(v);
}

void	small_parse_table_3651(t_small_parse_table_array *v)
{
	v->a[73020] = anon_sym_LPAREN;
	v->a[73021] = actions(1883);
	v->a[73022] = 1;
	v->a[73023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73024] = actions(1885);
	v->a[73025] = 1;
	v->a[73026] = anon_sym_DOLLAR;
	v->a[73027] = actions(1887);
	v->a[73028] = 1;
	v->a[73029] = anon_sym_DQUOTE;
	v->a[73030] = actions(1889);
	v->a[73031] = 1;
	v->a[73032] = anon_sym_DOLLAR_LBRACE;
	v->a[73033] = actions(1891);
	v->a[73034] = 1;
	v->a[73035] = anon_sym_DOLLAR_LPAREN;
	v->a[73036] = actions(1893);
	v->a[73037] = 1;
	v->a[73038] = anon_sym_BQUOTE;
	v->a[73039] = actions(1895);
	small_parse_table_3652(v);
}

void	small_parse_table_3652(t_small_parse_table_array *v)
{
	v->a[73040] = 1;
	v->a[73041] = sym_extglob_pattern;
	v->a[73042] = state(1396);
	v->a[73043] = 1;
	v->a[73044] = aux_sym_case_statement_repeat1;
	v->a[73045] = state(1923);
	v->a[73046] = 1;
	v->a[73047] = sym_case_item;
	v->a[73048] = state(2222);
	v->a[73049] = 1;
	v->a[73050] = sym__case_item_last;
	v->a[73051] = state(2078);
	v->a[73052] = 2;
	v->a[73053] = sym_concatenation;
	v->a[73054] = sym__extglob_blob;
	v->a[73055] = actions(1875);
	v->a[73056] = 3;
	v->a[73057] = sym_raw_string;
	v->a[73058] = sym_number;
	v->a[73059] = sym_word;
	small_parse_table_3653(v);
}

void	small_parse_table_3653(t_small_parse_table_array *v)
{
	v->a[73060] = state(2004);
	v->a[73061] = 5;
	v->a[73062] = sym_arithmetic_expansion;
	v->a[73063] = sym_string;
	v->a[73064] = sym_simple_expansion;
	v->a[73065] = sym_expansion;
	v->a[73066] = sym_command_substitution;
	v->a[73067] = 3;
	v->a[73068] = actions(3);
	v->a[73069] = 1;
	v->a[73070] = sym_comment;
	v->a[73071] = actions(2271);
	v->a[73072] = 2;
	v->a[73073] = sym_file_descriptor;
	v->a[73074] = aux_sym_heredoc_redirect_token1;
	v->a[73075] = actions(2273);
	v->a[73076] = 19;
	v->a[73077] = anon_sym_esac;
	v->a[73078] = anon_sym_PIPE;
	v->a[73079] = anon_sym_SEMI_SEMI;
	small_parse_table_3654(v);
}

void	small_parse_table_3654(t_small_parse_table_array *v)
{
	v->a[73080] = anon_sym_AMP_AMP;
	v->a[73081] = anon_sym_PIPE_PIPE;
	v->a[73082] = anon_sym_LT;
	v->a[73083] = anon_sym_GT;
	v->a[73084] = anon_sym_GT_GT;
	v->a[73085] = anon_sym_AMP_GT;
	v->a[73086] = anon_sym_AMP_GT_GT;
	v->a[73087] = anon_sym_LT_AMP;
	v->a[73088] = anon_sym_GT_AMP;
	v->a[73089] = anon_sym_GT_PIPE;
	v->a[73090] = anon_sym_LT_AMP_DASH;
	v->a[73091] = anon_sym_GT_AMP_DASH;
	v->a[73092] = anon_sym_LT_LT;
	v->a[73093] = anon_sym_LT_LT_DASH;
	v->a[73094] = anon_sym_AMP;
	v->a[73095] = anon_sym_SEMI;
	v->a[73096] = 3;
	v->a[73097] = actions(3);
	v->a[73098] = 1;
	v->a[73099] = sym_comment;
	small_parse_table_3655(v);
}

/* EOF small_parse_table_730.c */
