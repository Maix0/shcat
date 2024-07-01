/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_400.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2000(t_small_parse_table_array *v)
{
	v->a[40000] = anon_sym_DOLLAR_LBRACE;
	v->a[40001] = anon_sym_DOLLAR_LPAREN;
	v->a[40002] = anon_sym_BQUOTE;
	v->a[40003] = sym_word;
	v->a[40004] = anon_sym_SEMI;
	v->a[40005] = 3;
	v->a[40006] = actions(3);
	v->a[40007] = 1;
	v->a[40008] = sym_comment;
	v->a[40009] = actions(1027);
	v->a[40010] = 3;
	v->a[40011] = sym_file_descriptor;
	v->a[40012] = sym__concat;
	v->a[40013] = sym__bare_dollar;
	v->a[40014] = actions(1025);
	v->a[40015] = 28;
	v->a[40016] = anon_sym_esac;
	v->a[40017] = anon_sym_PIPE;
	v->a[40018] = anon_sym_SEMI_SEMI;
	v->a[40019] = anon_sym_AMP_AMP;
	small_parse_table_2001(v);
}

void	small_parse_table_2001(t_small_parse_table_array *v)
{
	v->a[40020] = anon_sym_PIPE_PIPE;
	v->a[40021] = anon_sym_LT;
	v->a[40022] = anon_sym_GT;
	v->a[40023] = anon_sym_GT_GT;
	v->a[40024] = anon_sym_LT_AMP;
	v->a[40025] = anon_sym_GT_AMP;
	v->a[40026] = anon_sym_GT_PIPE;
	v->a[40027] = anon_sym_LT_AMP_DASH;
	v->a[40028] = anon_sym_GT_AMP_DASH;
	v->a[40029] = anon_sym_LT_LT;
	v->a[40030] = anon_sym_LT_LT_DASH;
	v->a[40031] = aux_sym_heredoc_redirect_token1;
	v->a[40032] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40033] = anon_sym_AMP;
	v->a[40034] = aux_sym_concatenation_token1;
	v->a[40035] = anon_sym_DOLLAR;
	v->a[40036] = anon_sym_DQUOTE;
	v->a[40037] = sym_raw_string;
	v->a[40038] = sym_number;
	v->a[40039] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2002(v);
}

void	small_parse_table_2002(t_small_parse_table_array *v)
{
	v->a[40040] = anon_sym_DOLLAR_LPAREN;
	v->a[40041] = anon_sym_BQUOTE;
	v->a[40042] = sym_word;
	v->a[40043] = anon_sym_SEMI;
	v->a[40044] = 3;
	v->a[40045] = actions(3);
	v->a[40046] = 1;
	v->a[40047] = sym_comment;
	v->a[40048] = actions(939);
	v->a[40049] = 4;
	v->a[40050] = sym_file_descriptor;
	v->a[40051] = sym__concat;
	v->a[40052] = sym_variable_name;
	v->a[40053] = ts_builtin_sym_end;
	v->a[40054] = actions(937);
	v->a[40055] = 27;
	v->a[40056] = anon_sym_PIPE;
	v->a[40057] = anon_sym_SEMI_SEMI;
	v->a[40058] = anon_sym_AMP_AMP;
	v->a[40059] = anon_sym_PIPE_PIPE;
	small_parse_table_2003(v);
}

void	small_parse_table_2003(t_small_parse_table_array *v)
{
	v->a[40060] = anon_sym_LT;
	v->a[40061] = anon_sym_GT;
	v->a[40062] = anon_sym_GT_GT;
	v->a[40063] = anon_sym_LT_AMP;
	v->a[40064] = anon_sym_GT_AMP;
	v->a[40065] = anon_sym_GT_PIPE;
	v->a[40066] = anon_sym_LT_AMP_DASH;
	v->a[40067] = anon_sym_GT_AMP_DASH;
	v->a[40068] = anon_sym_LT_LT;
	v->a[40069] = anon_sym_LT_LT_DASH;
	v->a[40070] = aux_sym_heredoc_redirect_token1;
	v->a[40071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40072] = anon_sym_AMP;
	v->a[40073] = aux_sym_concatenation_token1;
	v->a[40074] = anon_sym_DOLLAR;
	v->a[40075] = anon_sym_DQUOTE;
	v->a[40076] = sym_raw_string;
	v->a[40077] = sym_number;
	v->a[40078] = anon_sym_DOLLAR_LBRACE;
	v->a[40079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2004(v);
}

void	small_parse_table_2004(t_small_parse_table_array *v)
{
	v->a[40080] = anon_sym_BQUOTE;
	v->a[40081] = sym_word;
	v->a[40082] = anon_sym_SEMI;
	v->a[40083] = 6;
	v->a[40084] = actions(3);
	v->a[40085] = 1;
	v->a[40086] = sym_comment;
	v->a[40087] = actions(379);
	v->a[40088] = 1;
	v->a[40089] = sym_file_descriptor;
	v->a[40090] = actions(1435);
	v->a[40091] = 1;
	v->a[40092] = sym_variable_name;
	v->a[40093] = actions(1433);
	v->a[40094] = 2;
	v->a[40095] = aux_sym__simple_variable_name_token1;
	v->a[40096] = aux_sym__multiline_variable_name_token1;
	v->a[40097] = actions(1431);
	v->a[40098] = 9;
	v->a[40099] = anon_sym_BANG;
	small_parse_table_2005(v);
}

/* EOF small_parse_table_400.c */
