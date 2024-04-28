/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_520.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2600(t_small_parse_table_array *v)
{
	v->a[52000] = actions(3);
	v->a[52001] = 1;
	v->a[52002] = sym_comment;
	v->a[52003] = actions(1326);
	v->a[52004] = 6;
	v->a[52005] = sym_file_descriptor;
	v->a[52006] = sym__concat;
	v->a[52007] = sym_variable_name;
	v->a[52008] = sym_test_operator;
	v->a[52009] = sym__brace_start;
	v->a[52010] = aux_sym_heredoc_redirect_token1;
	v->a[52011] = actions(1324);
	v->a[52012] = 41;
	v->a[52013] = anon_sym_LPAREN_LPAREN;
	v->a[52014] = anon_sym_SEMI;
	v->a[52015] = anon_sym_PIPE_PIPE;
	v->a[52016] = anon_sym_AMP_AMP;
	v->a[52017] = anon_sym_PIPE;
	v->a[52018] = anon_sym_AMP;
	v->a[52019] = anon_sym_LT;
	small_parse_table_2601(v);
}

void	small_parse_table_2601(t_small_parse_table_array *v)
{
	v->a[52020] = anon_sym_GT;
	v->a[52021] = anon_sym_LT_LT;
	v->a[52022] = anon_sym_GT_GT;
	v->a[52023] = anon_sym_esac;
	v->a[52024] = anon_sym_SEMI_SEMI;
	v->a[52025] = anon_sym_SEMI_AMP;
	v->a[52026] = anon_sym_SEMI_SEMI_AMP;
	v->a[52027] = anon_sym_PIPE_AMP;
	v->a[52028] = anon_sym_AMP_GT;
	v->a[52029] = anon_sym_AMP_GT_GT;
	v->a[52030] = anon_sym_LT_AMP;
	v->a[52031] = anon_sym_GT_AMP;
	v->a[52032] = anon_sym_GT_PIPE;
	v->a[52033] = anon_sym_LT_AMP_DASH;
	v->a[52034] = anon_sym_GT_AMP_DASH;
	v->a[52035] = anon_sym_LT_LT_DASH;
	v->a[52036] = anon_sym_LT_LT_LT;
	v->a[52037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52038] = anon_sym_DOLLAR_LBRACK;
	v->a[52039] = aux_sym_concatenation_token1;
	small_parse_table_2602(v);
}

void	small_parse_table_2602(t_small_parse_table_array *v)
{
	v->a[52040] = anon_sym_DOLLAR;
	v->a[52041] = sym__special_character;
	v->a[52042] = anon_sym_DQUOTE;
	v->a[52043] = sym_raw_string;
	v->a[52044] = sym_ansi_c_string;
	v->a[52045] = aux_sym_number_token1;
	v->a[52046] = aux_sym_number_token2;
	v->a[52047] = anon_sym_DOLLAR_LBRACE;
	v->a[52048] = anon_sym_DOLLAR_LPAREN;
	v->a[52049] = anon_sym_BQUOTE;
	v->a[52050] = anon_sym_DOLLAR_BQUOTE;
	v->a[52051] = anon_sym_LT_LPAREN;
	v->a[52052] = anon_sym_GT_LPAREN;
	v->a[52053] = sym_word;
	v->a[52054] = 3;
	v->a[52055] = actions(3);
	v->a[52056] = 1;
	v->a[52057] = sym_comment;
	v->a[52058] = actions(1253);
	v->a[52059] = 6;
	small_parse_table_2603(v);
}

void	small_parse_table_2603(t_small_parse_table_array *v)
{
	v->a[52060] = sym_file_descriptor;
	v->a[52061] = sym__concat;
	v->a[52062] = sym_variable_name;
	v->a[52063] = sym_test_operator;
	v->a[52064] = sym__brace_start;
	v->a[52065] = aux_sym_heredoc_redirect_token1;
	v->a[52066] = actions(1251);
	v->a[52067] = 41;
	v->a[52068] = anon_sym_LPAREN_LPAREN;
	v->a[52069] = anon_sym_SEMI;
	v->a[52070] = anon_sym_PIPE_PIPE;
	v->a[52071] = anon_sym_AMP_AMP;
	v->a[52072] = anon_sym_PIPE;
	v->a[52073] = anon_sym_AMP;
	v->a[52074] = anon_sym_LT;
	v->a[52075] = anon_sym_GT;
	v->a[52076] = anon_sym_LT_LT;
	v->a[52077] = anon_sym_GT_GT;
	v->a[52078] = anon_sym_esac;
	v->a[52079] = anon_sym_SEMI_SEMI;
	small_parse_table_2604(v);
}

void	small_parse_table_2604(t_small_parse_table_array *v)
{
	v->a[52080] = anon_sym_SEMI_AMP;
	v->a[52081] = anon_sym_SEMI_SEMI_AMP;
	v->a[52082] = anon_sym_PIPE_AMP;
	v->a[52083] = anon_sym_AMP_GT;
	v->a[52084] = anon_sym_AMP_GT_GT;
	v->a[52085] = anon_sym_LT_AMP;
	v->a[52086] = anon_sym_GT_AMP;
	v->a[52087] = anon_sym_GT_PIPE;
	v->a[52088] = anon_sym_LT_AMP_DASH;
	v->a[52089] = anon_sym_GT_AMP_DASH;
	v->a[52090] = anon_sym_LT_LT_DASH;
	v->a[52091] = anon_sym_LT_LT_LT;
	v->a[52092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52093] = anon_sym_DOLLAR_LBRACK;
	v->a[52094] = aux_sym_concatenation_token1;
	v->a[52095] = anon_sym_DOLLAR;
	v->a[52096] = sym__special_character;
	v->a[52097] = anon_sym_DQUOTE;
	v->a[52098] = sym_raw_string;
	v->a[52099] = sym_ansi_c_string;
	small_parse_table_2605(v);
}

/* EOF small_parse_table_520.c */
