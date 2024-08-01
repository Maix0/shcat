/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_280.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1400(t_small_parse_table_array *v)
{
	v->a[28000] = anon_sym_LBRACE;
	v->a[28001] = anon_sym_BANG;
	v->a[28002] = anon_sym_LT;
	v->a[28003] = anon_sym_GT;
	v->a[28004] = anon_sym_GT_GT;
	v->a[28005] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28006] = anon_sym_DOLLAR;
	v->a[28007] = anon_sym_DQUOTE;
	v->a[28008] = sym_raw_string;
	v->a[28009] = sym_number;
	v->a[28010] = anon_sym_DOLLAR_LBRACE;
	v->a[28011] = anon_sym_DOLLAR_LPAREN;
	v->a[28012] = anon_sym_BQUOTE;
	v->a[28013] = sym_word;
	v->a[28014] = 4;
	v->a[28015] = actions(3);
	v->a[28016] = 1;
	v->a[28017] = sym_comment;
	v->a[28018] = actions(1044);
	v->a[28019] = 1;
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = sym_variable_name;
	v->a[28021] = actions(1185);
	v->a[28022] = 1;
	v->a[28023] = ts_builtin_sym_end;
	v->a[28024] = actions(1040);
	v->a[28025] = 20;
	v->a[28026] = anon_sym_for;
	v->a[28027] = anon_sym_while;
	v->a[28028] = anon_sym_until;
	v->a[28029] = anon_sym_if;
	v->a[28030] = anon_sym_case;
	v->a[28031] = anon_sym_LPAREN;
	v->a[28032] = anon_sym_LBRACE;
	v->a[28033] = anon_sym_BANG;
	v->a[28034] = anon_sym_LT;
	v->a[28035] = anon_sym_GT;
	v->a[28036] = anon_sym_GT_GT;
	v->a[28037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28038] = anon_sym_DOLLAR;
	v->a[28039] = anon_sym_DQUOTE;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = sym_raw_string;
	v->a[28041] = sym_number;
	v->a[28042] = anon_sym_DOLLAR_LBRACE;
	v->a[28043] = anon_sym_DOLLAR_LPAREN;
	v->a[28044] = anon_sym_BQUOTE;
	v->a[28045] = sym_word;
	v->a[28046] = 3;
	v->a[28047] = actions(3);
	v->a[28048] = 1;
	v->a[28049] = sym_comment;
	v->a[28050] = actions(1108);
	v->a[28051] = 2;
	v->a[28052] = sym__concat;
	v->a[28053] = ts_builtin_sym_end;
	v->a[28054] = actions(1106);
	v->a[28055] = 20;
	v->a[28056] = anon_sym_PIPE;
	v->a[28057] = anon_sym_SEMI_SEMI;
	v->a[28058] = anon_sym_AMP_AMP;
	v->a[28059] = anon_sym_PIPE_PIPE;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = anon_sym_LT;
	v->a[28061] = anon_sym_GT;
	v->a[28062] = anon_sym_GT_GT;
	v->a[28063] = anon_sym_LT_LT;
	v->a[28064] = aux_sym_heredoc_redirect_token1;
	v->a[28065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28066] = aux_sym_concatenation_token1;
	v->a[28067] = anon_sym_DOLLAR;
	v->a[28068] = anon_sym_DQUOTE;
	v->a[28069] = sym_raw_string;
	v->a[28070] = sym_number;
	v->a[28071] = anon_sym_DOLLAR_LBRACE;
	v->a[28072] = anon_sym_DOLLAR_LPAREN;
	v->a[28073] = anon_sym_BQUOTE;
	v->a[28074] = sym_word;
	v->a[28075] = anon_sym_SEMI;
	v->a[28076] = 3;
	v->a[28077] = actions(3);
	v->a[28078] = 1;
	v->a[28079] = sym_comment;
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = actions(1060);
	v->a[28081] = 2;
	v->a[28082] = sym__concat;
	v->a[28083] = ts_builtin_sym_end;
	v->a[28084] = actions(1058);
	v->a[28085] = 20;
	v->a[28086] = anon_sym_PIPE;
	v->a[28087] = anon_sym_SEMI_SEMI;
	v->a[28088] = anon_sym_AMP_AMP;
	v->a[28089] = anon_sym_PIPE_PIPE;
	v->a[28090] = anon_sym_LT;
	v->a[28091] = anon_sym_GT;
	v->a[28092] = anon_sym_GT_GT;
	v->a[28093] = anon_sym_LT_LT;
	v->a[28094] = aux_sym_heredoc_redirect_token1;
	v->a[28095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28096] = aux_sym_concatenation_token1;
	v->a[28097] = anon_sym_DOLLAR;
	v->a[28098] = anon_sym_DQUOTE;
	v->a[28099] = sym_raw_string;
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
