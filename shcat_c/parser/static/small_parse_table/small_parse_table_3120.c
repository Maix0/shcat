/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3120.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15600(t_small_parse_table_array *v)
{
	v->a[312000] = aux_sym_concatenation_repeat1;
	v->a[312001] = state(6711);
	v->a[312002] = 1;
	v->a[312003] = aux_sym_case_item_repeat1;
	v->a[312004] = actions(14568);
	v->a[312005] = 2;
	v->a[312006] = sym__concat;
	v->a[312007] = aux_sym_concatenation_token1;
	v->a[312008] = 6;
	v->a[312009] = actions(71);
	v->a[312010] = 1;
	v->a[312011] = sym_comment;
	v->a[312012] = actions(8386);
	v->a[312013] = 1;
	v->a[312014] = anon_sym_DOLLAR_LBRACE;
	v->a[312015] = actions(8390);
	v->a[312016] = 1;
	v->a[312017] = anon_sym_BQUOTE;
	v->a[312018] = actions(8392);
	v->a[312019] = 1;
	small_parse_table_15601(v);
}

void	small_parse_table_15601(t_small_parse_table_array *v)
{
	v->a[312020] = anon_sym_DOLLAR_BQUOTE;
	v->a[312021] = actions(14620);
	v->a[312022] = 1;
	v->a[312023] = anon_sym_DOLLAR_LPAREN;
	v->a[312024] = state(4405);
	v->a[312025] = 2;
	v->a[312026] = sym_expansion;
	v->a[312027] = sym_command_substitution;
	v->a[312028] = 6;
	v->a[312029] = actions(3);
	v->a[312030] = 1;
	v->a[312031] = sym_comment;
	v->a[312032] = actions(14500);
	v->a[312033] = 1;
	v->a[312034] = anon_sym_COMMA;
	v->a[312035] = actions(14624);
	v->a[312036] = 1;
	v->a[312037] = aux_sym_heredoc_redirect_token1;
	v->a[312038] = state(4803);
	v->a[312039] = 1;
	small_parse_table_15602(v);
}

void	small_parse_table_15602(t_small_parse_table_array *v)
{
	v->a[312040] = sym__c_terminator;
	v->a[312041] = state(6286);
	v->a[312042] = 1;
	v->a[312043] = aux_sym__for_body_repeat1;
	v->a[312044] = actions(14622);
	v->a[312045] = 2;
	v->a[312046] = anon_sym_SEMI;
	v->a[312047] = anon_sym_AMP;
	v->a[312048] = 6;
	v->a[312049] = actions(71);
	v->a[312050] = 1;
	v->a[312051] = sym_comment;
	v->a[312052] = actions(14488);
	v->a[312053] = 1;
	v->a[312054] = anon_sym_elif;
	v->a[312055] = actions(14490);
	v->a[312056] = 1;
	v->a[312057] = anon_sym_else;
	v->a[312058] = actions(14626);
	v->a[312059] = 1;
	small_parse_table_15603(v);
}

void	small_parse_table_15603(t_small_parse_table_array *v)
{
	v->a[312060] = anon_sym_fi;
	v->a[312061] = state(6921);
	v->a[312062] = 1;
	v->a[312063] = sym_else_clause;
	v->a[312064] = state(6400);
	v->a[312065] = 2;
	v->a[312066] = sym_elif_clause;
	v->a[312067] = aux_sym_if_statement_repeat1;
	v->a[312068] = 6;
	v->a[312069] = actions(71);
	v->a[312070] = 1;
	v->a[312071] = sym_comment;
	v->a[312072] = actions(8010);
	v->a[312073] = 1;
	v->a[312074] = anon_sym_DOLLAR_LBRACE;
	v->a[312075] = actions(8014);
	v->a[312076] = 1;
	v->a[312077] = anon_sym_BQUOTE;
	v->a[312078] = actions(8016);
	v->a[312079] = 1;
	small_parse_table_15604(v);
}

void	small_parse_table_15604(t_small_parse_table_array *v)
{
	v->a[312080] = anon_sym_DOLLAR_BQUOTE;
	v->a[312081] = actions(14628);
	v->a[312082] = 1;
	v->a[312083] = anon_sym_DOLLAR_LPAREN;
	v->a[312084] = state(3529);
	v->a[312085] = 2;
	v->a[312086] = sym_expansion;
	v->a[312087] = sym_command_substitution;
	v->a[312088] = 6;
	v->a[312089] = actions(71);
	v->a[312090] = 1;
	v->a[312091] = sym_comment;
	v->a[312092] = actions(8858);
	v->a[312093] = 1;
	v->a[312094] = anon_sym_DOLLAR_LBRACE;
	v->a[312095] = actions(8860);
	v->a[312096] = 1;
	v->a[312097] = anon_sym_BQUOTE;
	v->a[312098] = actions(8862);
	v->a[312099] = 1;
	small_parse_table_15605(v);
}

/* EOF small_parse_table_3120.c */
