/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_170.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_850(t_small_parse_table_array *v)
{
	v->a[17000] = 1;
	v->a[17001] = anon_sym_DOLLAR;
	v->a[17002] = actions(103);
	v->a[17003] = 1;
	v->a[17004] = anon_sym_DQUOTE;
	v->a[17005] = actions(107);
	v->a[17006] = 1;
	v->a[17007] = anon_sym_DOLLAR_LBRACE;
	v->a[17008] = actions(109);
	v->a[17009] = 1;
	v->a[17010] = anon_sym_DOLLAR_LPAREN;
	v->a[17011] = actions(111);
	v->a[17012] = 1;
	v->a[17013] = anon_sym_BQUOTE;
	v->a[17014] = actions(405);
	v->a[17015] = 1;
	v->a[17016] = sym__bare_dollar;
	v->a[17017] = state(155);
	v->a[17018] = 1;
	v->a[17019] = aux_sym_command_repeat2;
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = state(523);
	v->a[17021] = 1;
	v->a[17022] = sym_concatenation;
	v->a[17023] = actions(401);
	v->a[17024] = 3;
	v->a[17025] = sym_raw_string;
	v->a[17026] = sym_number;
	v->a[17027] = sym_word;
	v->a[17028] = state(261);
	v->a[17029] = 5;
	v->a[17030] = sym_arithmetic_expansion;
	v->a[17031] = sym_string;
	v->a[17032] = sym_simple_expansion;
	v->a[17033] = sym_expansion;
	v->a[17034] = sym_command_substitution;
	v->a[17035] = actions(450);
	v->a[17036] = 11;
	v->a[17037] = anon_sym_esac;
	v->a[17038] = anon_sym_PIPE;
	v->a[17039] = anon_sym_SEMI_SEMI;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = anon_sym_AMP_AMP;
	v->a[17041] = anon_sym_PIPE_PIPE;
	v->a[17042] = anon_sym_LT;
	v->a[17043] = anon_sym_GT;
	v->a[17044] = anon_sym_GT_GT;
	v->a[17045] = anon_sym_LT_LT;
	v->a[17046] = aux_sym_heredoc_redirect_token1;
	v->a[17047] = anon_sym_SEMI;
	v->a[17048] = 13;
	v->a[17049] = actions(3);
	v->a[17050] = 1;
	v->a[17051] = sym_comment;
	v->a[17052] = actions(532);
	v->a[17053] = 1;
	v->a[17054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17055] = actions(535);
	v->a[17056] = 1;
	v->a[17057] = anon_sym_DOLLAR;
	v->a[17058] = actions(538);
	v->a[17059] = 1;
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = anon_sym_DQUOTE;
	v->a[17061] = actions(541);
	v->a[17062] = 1;
	v->a[17063] = anon_sym_DOLLAR_LBRACE;
	v->a[17064] = actions(544);
	v->a[17065] = 1;
	v->a[17066] = anon_sym_DOLLAR_LPAREN;
	v->a[17067] = actions(547);
	v->a[17068] = 1;
	v->a[17069] = anon_sym_BQUOTE;
	v->a[17070] = actions(550);
	v->a[17071] = 1;
	v->a[17072] = sym__bare_dollar;
	v->a[17073] = state(174);
	v->a[17074] = 1;
	v->a[17075] = aux_sym_command_repeat2;
	v->a[17076] = state(523);
	v->a[17077] = 1;
	v->a[17078] = sym_concatenation;
	v->a[17079] = actions(529);
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = 3;
	v->a[17081] = sym_raw_string;
	v->a[17082] = sym_number;
	v->a[17083] = sym_word;
	v->a[17084] = state(261);
	v->a[17085] = 5;
	v->a[17086] = sym_arithmetic_expansion;
	v->a[17087] = sym_string;
	v->a[17088] = sym_simple_expansion;
	v->a[17089] = sym_expansion;
	v->a[17090] = sym_command_substitution;
	v->a[17091] = actions(455);
	v->a[17092] = 11;
	v->a[17093] = anon_sym_esac;
	v->a[17094] = anon_sym_PIPE;
	v->a[17095] = anon_sym_SEMI_SEMI;
	v->a[17096] = anon_sym_AMP_AMP;
	v->a[17097] = anon_sym_PIPE_PIPE;
	v->a[17098] = anon_sym_LT;
	v->a[17099] = anon_sym_GT;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
