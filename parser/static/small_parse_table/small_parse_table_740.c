/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_740.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3700(t_small_parse_table_array *v)
{
	v->a[74000] = 1;
	v->a[74001] = anon_sym_DOLLAR;
	v->a[74002] = actions(1887);
	v->a[74003] = 1;
	v->a[74004] = anon_sym_DQUOTE;
	v->a[74005] = actions(1889);
	v->a[74006] = 1;
	v->a[74007] = anon_sym_DOLLAR_LBRACE;
	v->a[74008] = actions(1891);
	v->a[74009] = 1;
	v->a[74010] = anon_sym_DOLLAR_LPAREN;
	v->a[74011] = actions(1893);
	v->a[74012] = 1;
	v->a[74013] = anon_sym_BQUOTE;
	v->a[74014] = actions(1895);
	v->a[74015] = 1;
	v->a[74016] = sym_extglob_pattern;
	v->a[74017] = state(1396);
	v->a[74018] = 1;
	v->a[74019] = aux_sym_case_statement_repeat1;
	small_parse_table_3701(v);
}

void	small_parse_table_3701(t_small_parse_table_array *v)
{
	v->a[74020] = state(1923);
	v->a[74021] = 1;
	v->a[74022] = sym_case_item;
	v->a[74023] = state(2153);
	v->a[74024] = 1;
	v->a[74025] = sym__case_item_last;
	v->a[74026] = state(2078);
	v->a[74027] = 2;
	v->a[74028] = sym_concatenation;
	v->a[74029] = sym__extglob_blob;
	v->a[74030] = actions(1875);
	v->a[74031] = 3;
	v->a[74032] = sym_raw_string;
	v->a[74033] = sym_number;
	v->a[74034] = sym_word;
	v->a[74035] = state(2004);
	v->a[74036] = 5;
	v->a[74037] = sym_arithmetic_expansion;
	v->a[74038] = sym_string;
	v->a[74039] = sym_simple_expansion;
	small_parse_table_3702(v);
}

void	small_parse_table_3702(t_small_parse_table_array *v)
{
	v->a[74040] = sym_expansion;
	v->a[74041] = sym_command_substitution;
	v->a[74042] = 3;
	v->a[74043] = actions(3);
	v->a[74044] = 1;
	v->a[74045] = sym_comment;
	v->a[74046] = actions(2419);
	v->a[74047] = 2;
	v->a[74048] = sym_file_descriptor;
	v->a[74049] = aux_sym_heredoc_redirect_token1;
	v->a[74050] = actions(2421);
	v->a[74051] = 19;
	v->a[74052] = anon_sym_esac;
	v->a[74053] = anon_sym_PIPE;
	v->a[74054] = anon_sym_SEMI_SEMI;
	v->a[74055] = anon_sym_AMP_AMP;
	v->a[74056] = anon_sym_PIPE_PIPE;
	v->a[74057] = anon_sym_LT;
	v->a[74058] = anon_sym_GT;
	v->a[74059] = anon_sym_GT_GT;
	small_parse_table_3703(v);
}

void	small_parse_table_3703(t_small_parse_table_array *v)
{
	v->a[74060] = anon_sym_AMP_GT;
	v->a[74061] = anon_sym_AMP_GT_GT;
	v->a[74062] = anon_sym_LT_AMP;
	v->a[74063] = anon_sym_GT_AMP;
	v->a[74064] = anon_sym_GT_PIPE;
	v->a[74065] = anon_sym_LT_AMP_DASH;
	v->a[74066] = anon_sym_GT_AMP_DASH;
	v->a[74067] = anon_sym_LT_LT;
	v->a[74068] = anon_sym_LT_LT_DASH;
	v->a[74069] = anon_sym_AMP;
	v->a[74070] = anon_sym_SEMI;
	v->a[74071] = 3;
	v->a[74072] = actions(3);
	v->a[74073] = 1;
	v->a[74074] = sym_comment;
	v->a[74075] = actions(2415);
	v->a[74076] = 2;
	v->a[74077] = sym_file_descriptor;
	v->a[74078] = aux_sym_heredoc_redirect_token1;
	v->a[74079] = actions(2417);
	small_parse_table_3704(v);
}

void	small_parse_table_3704(t_small_parse_table_array *v)
{
	v->a[74080] = 19;
	v->a[74081] = anon_sym_esac;
	v->a[74082] = anon_sym_PIPE;
	v->a[74083] = anon_sym_SEMI_SEMI;
	v->a[74084] = anon_sym_AMP_AMP;
	v->a[74085] = anon_sym_PIPE_PIPE;
	v->a[74086] = anon_sym_LT;
	v->a[74087] = anon_sym_GT;
	v->a[74088] = anon_sym_GT_GT;
	v->a[74089] = anon_sym_AMP_GT;
	v->a[74090] = anon_sym_AMP_GT_GT;
	v->a[74091] = anon_sym_LT_AMP;
	v->a[74092] = anon_sym_GT_AMP;
	v->a[74093] = anon_sym_GT_PIPE;
	v->a[74094] = anon_sym_LT_AMP_DASH;
	v->a[74095] = anon_sym_GT_AMP_DASH;
	v->a[74096] = anon_sym_LT_LT;
	v->a[74097] = anon_sym_LT_LT_DASH;
	v->a[74098] = anon_sym_AMP;
	v->a[74099] = anon_sym_SEMI;
	small_parse_table_3705(v);
}

/* EOF small_parse_table_740.c */
