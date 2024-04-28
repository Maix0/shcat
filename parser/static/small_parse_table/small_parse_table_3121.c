/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3121.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15605(t_small_parse_table_array *v)
{
	v->a[312100] = anon_sym_DOLLAR_BQUOTE;
	v->a[312101] = actions(14630);
	v->a[312102] = 1;
	v->a[312103] = anon_sym_DOLLAR_LPAREN;
	v->a[312104] = state(2111);
	v->a[312105] = 2;
	v->a[312106] = sym_expansion;
	v->a[312107] = sym_command_substitution;
	v->a[312108] = 6;
	v->a[312109] = actions(3);
	v->a[312110] = 1;
	v->a[312111] = sym_comment;
	v->a[312112] = actions(14500);
	v->a[312113] = 1;
	v->a[312114] = anon_sym_COMMA;
	v->a[312115] = actions(14634);
	v->a[312116] = 1;
	v->a[312117] = aux_sym_heredoc_redirect_token1;
	v->a[312118] = state(4741);
	v->a[312119] = 1;
	small_parse_table_15606(v);
}

void	small_parse_table_15606(t_small_parse_table_array *v)
{
	v->a[312120] = sym__c_terminator;
	v->a[312121] = state(6463);
	v->a[312122] = 1;
	v->a[312123] = aux_sym__for_body_repeat1;
	v->a[312124] = actions(14632);
	v->a[312125] = 2;
	v->a[312126] = anon_sym_SEMI;
	v->a[312127] = anon_sym_AMP;
	v->a[312128] = 6;
	v->a[312129] = actions(71);
	v->a[312130] = 1;
	v->a[312131] = sym_comment;
	v->a[312132] = actions(1057);
	v->a[312133] = 1;
	v->a[312134] = anon_sym_DOLLAR_LBRACE;
	v->a[312135] = actions(1061);
	v->a[312136] = 1;
	v->a[312137] = anon_sym_BQUOTE;
	v->a[312138] = actions(1063);
	v->a[312139] = 1;
	small_parse_table_15607(v);
}

void	small_parse_table_15607(t_small_parse_table_array *v)
{
	v->a[312140] = anon_sym_DOLLAR_BQUOTE;
	v->a[312141] = actions(14636);
	v->a[312142] = 1;
	v->a[312143] = anon_sym_DOLLAR_LPAREN;
	v->a[312144] = state(1971);
	v->a[312145] = 2;
	v->a[312146] = sym_expansion;
	v->a[312147] = sym_command_substitution;
	v->a[312148] = 6;
	v->a[312149] = actions(71);
	v->a[312150] = 1;
	v->a[312151] = sym_comment;
	v->a[312152] = actions(8585);
	v->a[312153] = 1;
	v->a[312154] = anon_sym_DOLLAR_LBRACE;
	v->a[312155] = actions(8589);
	v->a[312156] = 1;
	v->a[312157] = anon_sym_BQUOTE;
	v->a[312158] = actions(8591);
	v->a[312159] = 1;
	small_parse_table_15608(v);
}

void	small_parse_table_15608(t_small_parse_table_array *v)
{
	v->a[312160] = anon_sym_DOLLAR_BQUOTE;
	v->a[312161] = actions(14638);
	v->a[312162] = 1;
	v->a[312163] = anon_sym_DOLLAR_LPAREN;
	v->a[312164] = state(5151);
	v->a[312165] = 2;
	v->a[312166] = sym_expansion;
	v->a[312167] = sym_command_substitution;
	v->a[312168] = 6;
	v->a[312169] = actions(71);
	v->a[312170] = 1;
	v->a[312171] = sym_comment;
	v->a[312172] = actions(14488);
	v->a[312173] = 1;
	v->a[312174] = anon_sym_elif;
	v->a[312175] = actions(14490);
	v->a[312176] = 1;
	v->a[312177] = anon_sym_else;
	v->a[312178] = actions(14640);
	v->a[312179] = 1;
	small_parse_table_15609(v);
}

void	small_parse_table_15609(t_small_parse_table_array *v)
{
	v->a[312180] = anon_sym_fi;
	v->a[312181] = state(7004);
	v->a[312182] = 1;
	v->a[312183] = sym_else_clause;
	v->a[312184] = state(6400);
	v->a[312185] = 2;
	v->a[312186] = sym_elif_clause;
	v->a[312187] = aux_sym_if_statement_repeat1;
	v->a[312188] = 6;
	v->a[312189] = actions(71);
	v->a[312190] = 1;
	v->a[312191] = sym_comment;
	v->a[312192] = actions(14564);
	v->a[312193] = 1;
	v->a[312194] = anon_sym_PIPE;
	v->a[312195] = actions(14642);
	v->a[312196] = 1;
	v->a[312197] = anon_sym_RPAREN;
	v->a[312198] = state(6439);
	v->a[312199] = 1;
	small_parse_table_15610(v);
}

/* EOF small_parse_table_3121.c */
