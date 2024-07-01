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
	v->a[40000] = anon_sym_GT_GT;
	v->a[40001] = anon_sym_LT_AMP;
	v->a[40002] = anon_sym_GT_AMP;
	v->a[40003] = anon_sym_GT_PIPE;
	v->a[40004] = anon_sym_LT_GT;
	v->a[40005] = anon_sym_LT_LT;
	v->a[40006] = anon_sym_LT_LT_DASH;
	v->a[40007] = aux_sym_heredoc_redirect_token1;
	v->a[40008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40009] = anon_sym_AMP;
	v->a[40010] = aux_sym_concatenation_token1;
	v->a[40011] = anon_sym_DOLLAR;
	v->a[40012] = anon_sym_DQUOTE;
	v->a[40013] = sym_raw_string;
	v->a[40014] = sym_number;
	v->a[40015] = anon_sym_DOLLAR_LBRACE;
	v->a[40016] = anon_sym_DOLLAR_LPAREN;
	v->a[40017] = anon_sym_BQUOTE;
	v->a[40018] = sym_word;
	v->a[40019] = anon_sym_SEMI;
	small_parse_table_2001(v);
}

void	small_parse_table_2001(t_small_parse_table_array *v)
{
	v->a[40020] = 3;
	v->a[40021] = actions(3);
	v->a[40022] = 1;
	v->a[40023] = sym_comment;
	v->a[40024] = actions(895);
	v->a[40025] = 2;
	v->a[40026] = sym_file_descriptor;
	v->a[40027] = sym__concat;
	v->a[40028] = actions(893);
	v->a[40029] = 27;
	v->a[40030] = anon_sym_esac;
	v->a[40031] = anon_sym_PIPE;
	v->a[40032] = anon_sym_SEMI_SEMI;
	v->a[40033] = anon_sym_AMP_AMP;
	v->a[40034] = anon_sym_PIPE_PIPE;
	v->a[40035] = anon_sym_LT;
	v->a[40036] = anon_sym_GT;
	v->a[40037] = anon_sym_GT_GT;
	v->a[40038] = anon_sym_LT_AMP;
	v->a[40039] = anon_sym_GT_AMP;
	small_parse_table_2002(v);
}

void	small_parse_table_2002(t_small_parse_table_array *v)
{
	v->a[40040] = anon_sym_GT_PIPE;
	v->a[40041] = anon_sym_LT_GT;
	v->a[40042] = anon_sym_LT_LT;
	v->a[40043] = anon_sym_LT_LT_DASH;
	v->a[40044] = aux_sym_heredoc_redirect_token1;
	v->a[40045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40046] = anon_sym_AMP;
	v->a[40047] = aux_sym_concatenation_token1;
	v->a[40048] = anon_sym_DOLLAR;
	v->a[40049] = anon_sym_DQUOTE;
	v->a[40050] = sym_raw_string;
	v->a[40051] = sym_number;
	v->a[40052] = anon_sym_DOLLAR_LBRACE;
	v->a[40053] = anon_sym_DOLLAR_LPAREN;
	v->a[40054] = anon_sym_BQUOTE;
	v->a[40055] = sym_word;
	v->a[40056] = anon_sym_SEMI;
	v->a[40057] = 3;
	v->a[40058] = actions(3);
	v->a[40059] = 1;
	small_parse_table_2003(v);
}

void	small_parse_table_2003(t_small_parse_table_array *v)
{
	v->a[40060] = sym_comment;
	v->a[40061] = actions(770);
	v->a[40062] = 2;
	v->a[40063] = sym_file_descriptor;
	v->a[40064] = sym__concat;
	v->a[40065] = actions(768);
	v->a[40066] = 27;
	v->a[40067] = anon_sym_esac;
	v->a[40068] = anon_sym_PIPE;
	v->a[40069] = anon_sym_SEMI_SEMI;
	v->a[40070] = anon_sym_AMP_AMP;
	v->a[40071] = anon_sym_PIPE_PIPE;
	v->a[40072] = anon_sym_LT;
	v->a[40073] = anon_sym_GT;
	v->a[40074] = anon_sym_GT_GT;
	v->a[40075] = anon_sym_LT_AMP;
	v->a[40076] = anon_sym_GT_AMP;
	v->a[40077] = anon_sym_GT_PIPE;
	v->a[40078] = anon_sym_LT_GT;
	v->a[40079] = anon_sym_LT_LT;
	small_parse_table_2004(v);
}

void	small_parse_table_2004(t_small_parse_table_array *v)
{
	v->a[40080] = anon_sym_LT_LT_DASH;
	v->a[40081] = aux_sym_heredoc_redirect_token1;
	v->a[40082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40083] = anon_sym_AMP;
	v->a[40084] = aux_sym_concatenation_token1;
	v->a[40085] = anon_sym_DOLLAR;
	v->a[40086] = anon_sym_DQUOTE;
	v->a[40087] = sym_raw_string;
	v->a[40088] = sym_number;
	v->a[40089] = anon_sym_DOLLAR_LBRACE;
	v->a[40090] = anon_sym_DOLLAR_LPAREN;
	v->a[40091] = anon_sym_BQUOTE;
	v->a[40092] = sym_word;
	v->a[40093] = anon_sym_SEMI;
	v->a[40094] = 3;
	v->a[40095] = actions(3);
	v->a[40096] = 1;
	v->a[40097] = sym_comment;
	v->a[40098] = actions(795);
	v->a[40099] = 2;
	small_parse_table_2005(v);
}

/* EOF small_parse_table_400.c */
