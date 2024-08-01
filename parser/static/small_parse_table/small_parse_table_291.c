/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_291.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1455(t_small_parse_table_array *v)
{
	v->a[29100] = anon_sym_DQUOTE;
	v->a[29101] = sym_raw_string;
	v->a[29102] = sym_number;
	v->a[29103] = anon_sym_DOLLAR_LBRACE;
	v->a[29104] = anon_sym_DOLLAR_LPAREN;
	v->a[29105] = anon_sym_BQUOTE;
	v->a[29106] = sym_word;
	v->a[29107] = anon_sym_SEMI;
	v->a[29108] = 3;
	v->a[29109] = actions(3);
	v->a[29110] = 1;
	v->a[29111] = sym_comment;
	v->a[29112] = actions(1083);
	v->a[29113] = 2;
	v->a[29114] = sym__concat;
	v->a[29115] = ts_builtin_sym_end;
	v->a[29116] = actions(1085);
	v->a[29117] = 20;
	v->a[29118] = anon_sym_PIPE;
	v->a[29119] = anon_sym_SEMI_SEMI;
	small_parse_table_1456(v);
}

void	small_parse_table_1456(t_small_parse_table_array *v)
{
	v->a[29120] = anon_sym_AMP_AMP;
	v->a[29121] = anon_sym_PIPE_PIPE;
	v->a[29122] = anon_sym_LT;
	v->a[29123] = anon_sym_GT;
	v->a[29124] = anon_sym_GT_GT;
	v->a[29125] = anon_sym_LT_LT;
	v->a[29126] = aux_sym_heredoc_redirect_token1;
	v->a[29127] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29128] = aux_sym_concatenation_token1;
	v->a[29129] = anon_sym_DOLLAR;
	v->a[29130] = anon_sym_DQUOTE;
	v->a[29131] = sym_raw_string;
	v->a[29132] = sym_number;
	v->a[29133] = anon_sym_DOLLAR_LBRACE;
	v->a[29134] = anon_sym_DOLLAR_LPAREN;
	v->a[29135] = anon_sym_BQUOTE;
	v->a[29136] = sym_word;
	v->a[29137] = anon_sym_SEMI;
	v->a[29138] = 16;
	v->a[29139] = actions(3);
	small_parse_table_1457(v);
}

void	small_parse_table_1457(t_small_parse_table_array *v)
{
	v->a[29140] = 1;
	v->a[29141] = sym_comment;
	v->a[29142] = actions(778);
	v->a[29143] = 1;
	v->a[29144] = anon_sym_LPAREN;
	v->a[29145] = actions(782);
	v->a[29146] = 1;
	v->a[29147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29148] = actions(784);
	v->a[29149] = 1;
	v->a[29150] = anon_sym_DOLLAR;
	v->a[29151] = actions(786);
	v->a[29152] = 1;
	v->a[29153] = anon_sym_DQUOTE;
	v->a[29154] = actions(788);
	v->a[29155] = 1;
	v->a[29156] = anon_sym_DOLLAR_LBRACE;
	v->a[29157] = actions(790);
	v->a[29158] = 1;
	v->a[29159] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1458(v);
}

void	small_parse_table_1458(t_small_parse_table_array *v)
{
	v->a[29160] = actions(792);
	v->a[29161] = 1;
	v->a[29162] = anon_sym_BQUOTE;
	v->a[29163] = actions(794);
	v->a[29164] = 1;
	v->a[29165] = sym_extglob_pattern;
	v->a[29166] = actions(1216);
	v->a[29167] = 1;
	v->a[29168] = anon_sym_esac;
	v->a[29169] = state(514);
	v->a[29170] = 1;
	v->a[29171] = aux_sym_case_statement_repeat1;
	v->a[29172] = state(1232);
	v->a[29173] = 1;
	v->a[29174] = sym_case_item;
	v->a[29175] = state(1651);
	v->a[29176] = 1;
	v->a[29177] = sym__case_item_last;
	v->a[29178] = state(1538);
	v->a[29179] = 2;
	small_parse_table_1459(v);
}

void	small_parse_table_1459(t_small_parse_table_array *v)
{
	v->a[29180] = sym_concatenation;
	v->a[29181] = sym__extglob_blob;
	v->a[29182] = actions(774);
	v->a[29183] = 3;
	v->a[29184] = sym_raw_string;
	v->a[29185] = sym_number;
	v->a[29186] = sym_word;
	v->a[29187] = state(1468);
	v->a[29188] = 5;
	v->a[29189] = sym_arithmetic_expansion;
	v->a[29190] = sym_string;
	v->a[29191] = sym_simple_expansion;
	v->a[29192] = sym_expansion;
	v->a[29193] = sym_command_substitution;
	v->a[29194] = 16;
	v->a[29195] = actions(3);
	v->a[29196] = 1;
	v->a[29197] = sym_comment;
	v->a[29198] = actions(778);
	v->a[29199] = 1;
	small_parse_table_1460(v);
}

/* EOF small_parse_table_291.c */
