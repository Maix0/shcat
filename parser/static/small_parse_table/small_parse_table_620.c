/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_620.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3100(t_small_parse_table_array *v)
{
	v->a[62000] = anon_sym_LT_AMP;
	v->a[62001] = anon_sym_GT_AMP;
	v->a[62002] = anon_sym_GT_PIPE;
	v->a[62003] = anon_sym_LT_AMP_DASH;
	v->a[62004] = anon_sym_GT_AMP_DASH;
	v->a[62005] = anon_sym_LT_LT;
	v->a[62006] = anon_sym_LT_LT_DASH;
	v->a[62007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62008] = aux_sym_concatenation_token1;
	v->a[62009] = anon_sym_DOLLAR;
	v->a[62010] = anon_sym_DQUOTE;
	v->a[62011] = sym_raw_string;
	v->a[62012] = sym_number;
	v->a[62013] = anon_sym_DOLLAR_LBRACE;
	v->a[62014] = anon_sym_DOLLAR_LPAREN;
	v->a[62015] = anon_sym_BQUOTE;
	v->a[62016] = sym_word;
	v->a[62017] = 3;
	v->a[62018] = actions(3);
	v->a[62019] = 1;
	small_parse_table_3101(v);
}

void	small_parse_table_3101(t_small_parse_table_array *v)
{
	v->a[62020] = sym_comment;
	v->a[62021] = actions(1100);
	v->a[62022] = 2;
	v->a[62023] = sym_file_descriptor;
	v->a[62024] = sym__concat;
	v->a[62025] = actions(1102);
	v->a[62026] = 25;
	v->a[62027] = anon_sym_PIPE;
	v->a[62028] = anon_sym_AMP_AMP;
	v->a[62029] = anon_sym_PIPE_PIPE;
	v->a[62030] = anon_sym_LT;
	v->a[62031] = anon_sym_GT;
	v->a[62032] = anon_sym_GT_GT;
	v->a[62033] = anon_sym_AMP_GT;
	v->a[62034] = anon_sym_AMP_GT_GT;
	v->a[62035] = anon_sym_LT_AMP;
	v->a[62036] = anon_sym_GT_AMP;
	v->a[62037] = anon_sym_GT_PIPE;
	v->a[62038] = anon_sym_LT_AMP_DASH;
	v->a[62039] = anon_sym_GT_AMP_DASH;
	small_parse_table_3102(v);
}

void	small_parse_table_3102(t_small_parse_table_array *v)
{
	v->a[62040] = anon_sym_LT_LT;
	v->a[62041] = anon_sym_LT_LT_DASH;
	v->a[62042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62043] = aux_sym_concatenation_token1;
	v->a[62044] = anon_sym_DOLLAR;
	v->a[62045] = anon_sym_DQUOTE;
	v->a[62046] = sym_raw_string;
	v->a[62047] = sym_number;
	v->a[62048] = anon_sym_DOLLAR_LBRACE;
	v->a[62049] = anon_sym_DOLLAR_LPAREN;
	v->a[62050] = anon_sym_BQUOTE;
	v->a[62051] = sym_word;
	v->a[62052] = 16;
	v->a[62053] = actions(1094);
	v->a[62054] = 1;
	v->a[62055] = sym_comment;
	v->a[62056] = actions(1869);
	v->a[62057] = 1;
	v->a[62058] = anon_sym_LPAREN;
	v->a[62059] = actions(1871);
	small_parse_table_3103(v);
}

void	small_parse_table_3103(t_small_parse_table_array *v)
{
	v->a[62060] = 1;
	v->a[62061] = anon_sym_BANG;
	v->a[62062] = actions(1879);
	v->a[62063] = 1;
	v->a[62064] = anon_sym_TILDE;
	v->a[62065] = actions(1881);
	v->a[62066] = 1;
	v->a[62067] = anon_sym_DOLLAR;
	v->a[62068] = actions(1883);
	v->a[62069] = 1;
	v->a[62070] = anon_sym_DQUOTE;
	v->a[62071] = actions(1887);
	v->a[62072] = 1;
	v->a[62073] = anon_sym_DOLLAR_LBRACE;
	v->a[62074] = actions(1889);
	v->a[62075] = 1;
	v->a[62076] = anon_sym_DOLLAR_LPAREN;
	v->a[62077] = actions(1891);
	v->a[62078] = 1;
	v->a[62079] = anon_sym_BQUOTE;
	small_parse_table_3104(v);
}

void	small_parse_table_3104(t_small_parse_table_array *v)
{
	v->a[62080] = actions(1893);
	v->a[62081] = 1;
	v->a[62082] = sym_variable_name;
	v->a[62083] = actions(1925);
	v->a[62084] = 1;
	v->a[62085] = anon_sym_RPAREN_RPAREN;
	v->a[62086] = actions(1875);
	v->a[62087] = 2;
	v->a[62088] = anon_sym_PLUS_PLUS;
	v->a[62089] = anon_sym_DASH_DASH;
	v->a[62090] = actions(1877);
	v->a[62091] = 2;
	v->a[62092] = anon_sym_DASH2;
	v->a[62093] = anon_sym_PLUS2;
	v->a[62094] = actions(1885);
	v->a[62095] = 2;
	v->a[62096] = sym_number;
	v->a[62097] = aux_sym__simple_variable_name_token1;
	v->a[62098] = state(365);
	v->a[62099] = 3;
	small_parse_table_3105(v);
}

/* EOF small_parse_table_620.c */
