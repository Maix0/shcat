/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_680.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3400(t_small_parse_table_array *v)
{
	v->a[68000] = 3;
	v->a[68001] = actions(3);
	v->a[68002] = 1;
	v->a[68003] = sym_comment;
	v->a[68004] = actions(1041);
	v->a[68005] = 3;
	v->a[68006] = sym_file_descriptor;
	v->a[68007] = sym__concat;
	v->a[68008] = aux_sym_heredoc_redirect_token1;
	v->a[68009] = actions(1039);
	v->a[68010] = 18;
	v->a[68011] = anon_sym_esac;
	v->a[68012] = anon_sym_PIPE;
	v->a[68013] = anon_sym_SEMI_SEMI;
	v->a[68014] = anon_sym_AMP_AMP;
	v->a[68015] = anon_sym_PIPE_PIPE;
	v->a[68016] = anon_sym_LT;
	v->a[68017] = anon_sym_GT;
	v->a[68018] = anon_sym_GT_GT;
	v->a[68019] = anon_sym_LT_AMP;
	small_parse_table_3401(v);
}

void	small_parse_table_3401(t_small_parse_table_array *v)
{
	v->a[68020] = anon_sym_GT_AMP;
	v->a[68021] = anon_sym_GT_PIPE;
	v->a[68022] = anon_sym_LT_AMP_DASH;
	v->a[68023] = anon_sym_GT_AMP_DASH;
	v->a[68024] = anon_sym_LT_LT;
	v->a[68025] = anon_sym_LT_LT_DASH;
	v->a[68026] = anon_sym_AMP;
	v->a[68027] = aux_sym_concatenation_token1;
	v->a[68028] = anon_sym_SEMI;
	v->a[68029] = 12;
	v->a[68030] = actions(3);
	v->a[68031] = 1;
	v->a[68032] = sym_comment;
	v->a[68033] = actions(894);
	v->a[68034] = 1;
	v->a[68035] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68036] = actions(896);
	v->a[68037] = 1;
	v->a[68038] = anon_sym_DOLLAR;
	v->a[68039] = actions(898);
	small_parse_table_3402(v);
}

void	small_parse_table_3402(t_small_parse_table_array *v)
{
	v->a[68040] = 1;
	v->a[68041] = anon_sym_DQUOTE;
	v->a[68042] = actions(900);
	v->a[68043] = 1;
	v->a[68044] = anon_sym_DOLLAR_LBRACE;
	v->a[68045] = actions(902);
	v->a[68046] = 1;
	v->a[68047] = anon_sym_DOLLAR_LPAREN;
	v->a[68048] = actions(904);
	v->a[68049] = 1;
	v->a[68050] = anon_sym_BQUOTE;
	v->a[68051] = state(2121);
	v->a[68052] = 1;
	v->a[68053] = sym_terminator;
	v->a[68054] = state(1327);
	v->a[68055] = 2;
	v->a[68056] = sym_concatenation;
	v->a[68057] = aux_sym_for_statement_repeat1;
	v->a[68058] = actions(2260);
	v->a[68059] = 3;
	small_parse_table_3403(v);
}

void	small_parse_table_3403(t_small_parse_table_array *v)
{
	v->a[68060] = sym_raw_string;
	v->a[68061] = sym_number;
	v->a[68062] = sym_word;
	v->a[68063] = actions(2262);
	v->a[68064] = 4;
	v->a[68065] = anon_sym_SEMI_SEMI;
	v->a[68066] = aux_sym_heredoc_redirect_token1;
	v->a[68067] = anon_sym_AMP;
	v->a[68068] = anon_sym_SEMI;
	v->a[68069] = state(1543);
	v->a[68070] = 5;
	v->a[68071] = sym_arithmetic_expansion;
	v->a[68072] = sym_string;
	v->a[68073] = sym_simple_expansion;
	v->a[68074] = sym_expansion;
	v->a[68075] = sym_command_substitution;
	v->a[68076] = 3;
	v->a[68077] = actions(3);
	v->a[68078] = 1;
	v->a[68079] = sym_comment;
	small_parse_table_3404(v);
}

void	small_parse_table_3404(t_small_parse_table_array *v)
{
	v->a[68080] = actions(2264);
	v->a[68081] = 3;
	v->a[68082] = sym_file_descriptor;
	v->a[68083] = ts_builtin_sym_end;
	v->a[68084] = aux_sym_heredoc_redirect_token1;
	v->a[68085] = actions(2266);
	v->a[68086] = 18;
	v->a[68087] = anon_sym_PIPE;
	v->a[68088] = anon_sym_RPAREN;
	v->a[68089] = anon_sym_SEMI_SEMI;
	v->a[68090] = anon_sym_AMP_AMP;
	v->a[68091] = anon_sym_PIPE_PIPE;
	v->a[68092] = anon_sym_LT;
	v->a[68093] = anon_sym_GT;
	v->a[68094] = anon_sym_GT_GT;
	v->a[68095] = anon_sym_LT_AMP;
	v->a[68096] = anon_sym_GT_AMP;
	v->a[68097] = anon_sym_GT_PIPE;
	v->a[68098] = anon_sym_LT_AMP_DASH;
	v->a[68099] = anon_sym_GT_AMP_DASH;
	small_parse_table_3405(v);
}

/* EOF small_parse_table_680.c */
