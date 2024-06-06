/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_420.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2100(t_small_parse_table_array *v)
{
	v->a[42000] = actions(2662);
	v->a[42001] = 33;
	v->a[42002] = anon_sym_PIPE;
	v->a[42003] = anon_sym_SEMI_SEMI;
	v->a[42004] = anon_sym_SEMI_AMP;
	v->a[42005] = anon_sym_SEMI_SEMI_AMP;
	v->a[42006] = anon_sym_PIPE_AMP;
	v->a[42007] = anon_sym_AMP_AMP;
	v->a[42008] = anon_sym_PIPE_PIPE;
	v->a[42009] = anon_sym_LT;
	v->a[42010] = anon_sym_GT;
	v->a[42011] = anon_sym_GT_GT;
	v->a[42012] = anon_sym_AMP_GT;
	v->a[42013] = anon_sym_AMP_GT_GT;
	v->a[42014] = anon_sym_LT_AMP;
	v->a[42015] = anon_sym_GT_AMP;
	v->a[42016] = anon_sym_GT_PIPE;
	v->a[42017] = anon_sym_LT_AMP_DASH;
	v->a[42018] = anon_sym_GT_AMP_DASH;
	v->a[42019] = anon_sym_LT_LT;
	small_parse_table_2101(v);
}

void	small_parse_table_2101(t_small_parse_table_array *v)
{
	v->a[42020] = anon_sym_LT_LT_DASH;
	v->a[42021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42022] = anon_sym_AMP;
	v->a[42023] = anon_sym_DOLLAR;
	v->a[42024] = sym__special_character;
	v->a[42025] = anon_sym_DQUOTE;
	v->a[42026] = sym_raw_string;
	v->a[42027] = aux_sym_number_token1;
	v->a[42028] = aux_sym_number_token2;
	v->a[42029] = anon_sym_DOLLAR_LBRACE;
	v->a[42030] = anon_sym_DOLLAR_LPAREN;
	v->a[42031] = anon_sym_BQUOTE;
	v->a[42032] = anon_sym_DOLLAR_BQUOTE;
	v->a[42033] = sym_word;
	v->a[42034] = anon_sym_SEMI;
	v->a[42035] = 3;
	v->a[42036] = actions(3);
	v->a[42037] = 1;
	v->a[42038] = sym_comment;
	v->a[42039] = actions(3024);
	small_parse_table_2102(v);
}

void	small_parse_table_2102(t_small_parse_table_array *v)
{
	v->a[42040] = 6;
	v->a[42041] = sym_file_descriptor;
	v->a[42042] = sym__concat;
	v->a[42043] = sym_variable_name;
	v->a[42044] = sym_test_operator;
	v->a[42045] = sym__brace_start;
	v->a[42046] = aux_sym_heredoc_redirect_token1;
	v->a[42047] = actions(3022);
	v->a[42048] = 34;
	v->a[42049] = anon_sym_PIPE;
	v->a[42050] = anon_sym_SEMI_SEMI;
	v->a[42051] = anon_sym_SEMI_AMP;
	v->a[42052] = anon_sym_SEMI_SEMI_AMP;
	v->a[42053] = anon_sym_PIPE_AMP;
	v->a[42054] = anon_sym_AMP_AMP;
	v->a[42055] = anon_sym_PIPE_PIPE;
	v->a[42056] = anon_sym_LT;
	v->a[42057] = anon_sym_GT;
	v->a[42058] = anon_sym_GT_GT;
	v->a[42059] = anon_sym_AMP_GT;
	small_parse_table_2103(v);
}

void	small_parse_table_2103(t_small_parse_table_array *v)
{
	v->a[42060] = anon_sym_AMP_GT_GT;
	v->a[42061] = anon_sym_LT_AMP;
	v->a[42062] = anon_sym_GT_AMP;
	v->a[42063] = anon_sym_GT_PIPE;
	v->a[42064] = anon_sym_LT_AMP_DASH;
	v->a[42065] = anon_sym_GT_AMP_DASH;
	v->a[42066] = anon_sym_LT_LT;
	v->a[42067] = anon_sym_LT_LT_DASH;
	v->a[42068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42069] = anon_sym_AMP;
	v->a[42070] = aux_sym_concatenation_token1;
	v->a[42071] = anon_sym_DOLLAR;
	v->a[42072] = sym__special_character;
	v->a[42073] = anon_sym_DQUOTE;
	v->a[42074] = sym_raw_string;
	v->a[42075] = aux_sym_number_token1;
	v->a[42076] = aux_sym_number_token2;
	v->a[42077] = anon_sym_DOLLAR_LBRACE;
	v->a[42078] = anon_sym_DOLLAR_LPAREN;
	v->a[42079] = anon_sym_BQUOTE;
	small_parse_table_2104(v);
}

void	small_parse_table_2104(t_small_parse_table_array *v)
{
	v->a[42080] = anon_sym_DOLLAR_BQUOTE;
	v->a[42081] = sym_word;
	v->a[42082] = anon_sym_SEMI;
	v->a[42083] = 7;
	v->a[42084] = actions(3);
	v->a[42085] = 1;
	v->a[42086] = sym_comment;
	v->a[42087] = actions(3358);
	v->a[42088] = 1;
	v->a[42089] = aux_sym_concatenation_token1;
	v->a[42090] = actions(3360);
	v->a[42091] = 1;
	v->a[42092] = sym__concat;
	v->a[42093] = actions(3586);
	v->a[42094] = 1;
	v->a[42095] = anon_sym_LPAREN;
	v->a[42096] = state(914);
	v->a[42097] = 1;
	v->a[42098] = aux_sym_concatenation_repeat1;
	v->a[42099] = actions(2754);
	small_parse_table_2105(v);
}

/* EOF small_parse_table_420.c */
