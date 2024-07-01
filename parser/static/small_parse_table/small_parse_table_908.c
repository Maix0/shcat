/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_908.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4540(t_small_parse_table_array *v)
{
	v->a[90800] = anon_sym_else;
	v->a[90801] = actions(4006);
	v->a[90802] = 1;
	v->a[90803] = anon_sym_fi;
	v->a[90804] = state(2212);
	v->a[90805] = 1;
	v->a[90806] = sym_else_clause;
	v->a[90807] = state(2052);
	v->a[90808] = 2;
	v->a[90809] = sym_elif_clause;
	v->a[90810] = aux_sym_if_statement_repeat1;
	v->a[90811] = 5;
	v->a[90812] = actions(3);
	v->a[90813] = 1;
	v->a[90814] = sym_comment;
	v->a[90815] = actions(3859);
	v->a[90816] = 1;
	v->a[90817] = aux_sym_heredoc_redirect_token1;
	v->a[90818] = actions(3877);
	v->a[90819] = 1;
	small_parse_table_4541(v);
}

void	small_parse_table_4541(t_small_parse_table_array *v)
{
	v->a[90820] = anon_sym_in;
	v->a[90821] = state(2170);
	v->a[90822] = 1;
	v->a[90823] = sym_terminator;
	v->a[90824] = actions(2262);
	v->a[90825] = 3;
	v->a[90826] = anon_sym_SEMI_SEMI;
	v->a[90827] = anon_sym_AMP;
	v->a[90828] = anon_sym_SEMI;
	v->a[90829] = 3;
	v->a[90830] = actions(3);
	v->a[90831] = 1;
	v->a[90832] = sym_comment;
	v->a[90833] = actions(1005);
	v->a[90834] = 2;
	v->a[90835] = sym_regex;
	v->a[90836] = aux_sym_expansion_regex_token1;
	v->a[90837] = actions(1003);
	v->a[90838] = 4;
	v->a[90839] = anon_sym_RPAREN;
	small_parse_table_4542(v);
}

void	small_parse_table_4542(t_small_parse_table_array *v)
{
	v->a[90840] = anon_sym_RBRACE;
	v->a[90841] = anon_sym_DQUOTE;
	v->a[90842] = sym_raw_string;
	v->a[90843] = 3;
	v->a[90844] = actions(870);
	v->a[90845] = 1;
	v->a[90846] = sym_comment;
	v->a[90847] = actions(1025);
	v->a[90848] = 1;
	v->a[90849] = anon_sym_DOLLAR;
	v->a[90850] = actions(1027);
	v->a[90851] = 5;
	v->a[90852] = sym_heredoc_content;
	v->a[90853] = sym_heredoc_end;
	v->a[90854] = anon_sym_DOLLAR_LBRACE;
	v->a[90855] = anon_sym_DOLLAR_LPAREN;
	v->a[90856] = anon_sym_BQUOTE;
	v->a[90857] = 3;
	v->a[90858] = actions(870);
	v->a[90859] = 1;
	small_parse_table_4543(v);
}

void	small_parse_table_4543(t_small_parse_table_array *v)
{
	v->a[90860] = sym_comment;
	v->a[90861] = actions(1035);
	v->a[90862] = 1;
	v->a[90863] = anon_sym_DOLLAR;
	v->a[90864] = actions(1037);
	v->a[90865] = 5;
	v->a[90866] = sym_heredoc_content;
	v->a[90867] = sym_heredoc_end;
	v->a[90868] = anon_sym_DOLLAR_LBRACE;
	v->a[90869] = anon_sym_DOLLAR_LPAREN;
	v->a[90870] = anon_sym_BQUOTE;
	v->a[90871] = 5;
	v->a[90872] = actions(3);
	v->a[90873] = 1;
	v->a[90874] = sym_comment;
	v->a[90875] = actions(3859);
	v->a[90876] = 1;
	v->a[90877] = aux_sym_heredoc_redirect_token1;
	v->a[90878] = actions(3875);
	v->a[90879] = 1;
	small_parse_table_4544(v);
}

void	small_parse_table_4544(t_small_parse_table_array *v)
{
	v->a[90880] = anon_sym_in;
	v->a[90881] = state(2315);
	v->a[90882] = 1;
	v->a[90883] = sym_terminator;
	v->a[90884] = actions(2262);
	v->a[90885] = 3;
	v->a[90886] = anon_sym_SEMI_SEMI;
	v->a[90887] = anon_sym_AMP;
	v->a[90888] = anon_sym_SEMI;
	v->a[90889] = 6;
	v->a[90890] = actions(870);
	v->a[90891] = 1;
	v->a[90892] = sym_comment;
	v->a[90893] = actions(3984);
	v->a[90894] = 1;
	v->a[90895] = anon_sym_PIPE;
	v->a[90896] = actions(4008);
	v->a[90897] = 1;
	v->a[90898] = anon_sym_RPAREN;
	v->a[90899] = state(2050);
	small_parse_table_4545(v);
}

/* EOF small_parse_table_908.c */
