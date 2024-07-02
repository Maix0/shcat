/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_200.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1000(t_small_parse_table_array *v)
{
	v->a[20000] = anon_sym_LT_GT;
	v->a[20001] = anon_sym_LT_LT;
	v->a[20002] = anon_sym_LT_LT_DASH;
	v->a[20003] = aux_sym_heredoc_redirect_token1;
	v->a[20004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20005] = anon_sym_AMP;
	v->a[20006] = anon_sym_DOLLAR;
	v->a[20007] = anon_sym_DQUOTE;
	v->a[20008] = sym_raw_string;
	v->a[20009] = sym_number;
	v->a[20010] = anon_sym_DOLLAR_LBRACE;
	v->a[20011] = anon_sym_DOLLAR_LPAREN;
	v->a[20012] = anon_sym_BQUOTE;
	v->a[20013] = sym_word;
	v->a[20014] = anon_sym_SEMI;
	v->a[20015] = 12;
	v->a[20016] = actions(3);
	v->a[20017] = 1;
	v->a[20018] = sym_comment;
	v->a[20019] = actions(522);
	small_parse_table_1001(v);
}

void	small_parse_table_1001(t_small_parse_table_array *v)
{
	v->a[20020] = 1;
	v->a[20021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20022] = actions(525);
	v->a[20023] = 1;
	v->a[20024] = anon_sym_DOLLAR;
	v->a[20025] = actions(528);
	v->a[20026] = 1;
	v->a[20027] = anon_sym_DQUOTE;
	v->a[20028] = actions(531);
	v->a[20029] = 1;
	v->a[20030] = anon_sym_DOLLAR_LBRACE;
	v->a[20031] = actions(534);
	v->a[20032] = 1;
	v->a[20033] = anon_sym_DOLLAR_LPAREN;
	v->a[20034] = actions(537);
	v->a[20035] = 1;
	v->a[20036] = anon_sym_BQUOTE;
	v->a[20037] = actions(540);
	v->a[20038] = 2;
	v->a[20039] = sym_file_descriptor;
	small_parse_table_1002(v);
}

void	small_parse_table_1002(t_small_parse_table_array *v)
{
	v->a[20040] = sym_variable_name;
	v->a[20041] = state(189);
	v->a[20042] = 2;
	v->a[20043] = sym_concatenation;
	v->a[20044] = aux_sym_for_statement_repeat1;
	v->a[20045] = actions(517);
	v->a[20046] = 3;
	v->a[20047] = sym_raw_string;
	v->a[20048] = sym_number;
	v->a[20049] = sym_word;
	v->a[20050] = state(441);
	v->a[20051] = 5;
	v->a[20052] = sym_arithmetic_expansion;
	v->a[20053] = sym_string;
	v->a[20054] = sym_simple_expansion;
	v->a[20055] = sym_expansion;
	v->a[20056] = sym_command_substitution;
	v->a[20057] = actions(520);
	v->a[20058] = 17;
	v->a[20059] = anon_sym_esac;
	small_parse_table_1003(v);
}

void	small_parse_table_1003(t_small_parse_table_array *v)
{
	v->a[20060] = anon_sym_PIPE;
	v->a[20061] = anon_sym_SEMI_SEMI;
	v->a[20062] = anon_sym_AMP_AMP;
	v->a[20063] = anon_sym_PIPE_PIPE;
	v->a[20064] = anon_sym_LT;
	v->a[20065] = anon_sym_GT;
	v->a[20066] = anon_sym_GT_GT;
	v->a[20067] = anon_sym_LT_AMP;
	v->a[20068] = anon_sym_GT_AMP;
	v->a[20069] = anon_sym_GT_PIPE;
	v->a[20070] = anon_sym_LT_GT;
	v->a[20071] = anon_sym_LT_LT;
	v->a[20072] = anon_sym_LT_LT_DASH;
	v->a[20073] = aux_sym_heredoc_redirect_token1;
	v->a[20074] = anon_sym_AMP;
	v->a[20075] = anon_sym_SEMI;
	v->a[20076] = 5;
	v->a[20077] = actions(3);
	v->a[20078] = 1;
	v->a[20079] = sym_comment;
	small_parse_table_1004(v);
}

void	small_parse_table_1004(t_small_parse_table_array *v)
{
	v->a[20080] = state(203);
	v->a[20081] = 2;
	v->a[20082] = sym_concatenation;
	v->a[20083] = aux_sym_for_statement_repeat1;
	v->a[20084] = actions(511);
	v->a[20085] = 3;
	v->a[20086] = sym_file_descriptor;
	v->a[20087] = sym_variable_name;
	v->a[20088] = ts_builtin_sym_end;
	v->a[20089] = state(394);
	v->a[20090] = 5;
	v->a[20091] = sym_arithmetic_expansion;
	v->a[20092] = sym_string;
	v->a[20093] = sym_simple_expansion;
	v->a[20094] = sym_expansion;
	v->a[20095] = sym_command_substitution;
	v->a[20096] = actions(509);
	v->a[20097] = 25;
	v->a[20098] = anon_sym_PIPE;
	v->a[20099] = anon_sym_SEMI_SEMI;
	small_parse_table_1005(v);
}

/* EOF small_parse_table_200.c */
