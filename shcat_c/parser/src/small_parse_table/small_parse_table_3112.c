/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3112.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15560(t_small_parse_table_array *v)
{
	v->a[311200] = anon_sym_COMMA;
	v->a[311201] = actions(14536);
	v->a[311202] = 1;
	v->a[311203] = aux_sym_heredoc_redirect_token1;
	v->a[311204] = state(4700);
	v->a[311205] = 1;
	v->a[311206] = sym__c_terminator;
	v->a[311207] = state(6463);
	v->a[311208] = 1;
	v->a[311209] = aux_sym__for_body_repeat1;
	v->a[311210] = actions(14534);
	v->a[311211] = 2;
	v->a[311212] = anon_sym_SEMI;
	v->a[311213] = anon_sym_AMP;
	v->a[311214] = 3;
	v->a[311215] = actions(71);
	v->a[311216] = 1;
	v->a[311217] = sym_comment;
	v->a[311218] = actions(14512);
	v->a[311219] = 1;
	small_parse_table_15561(v);
}

void	small_parse_table_15561(t_small_parse_table_array *v)
{
	v->a[311220] = anon_sym_RBRACE3;
	v->a[311221] = actions(14437);
	v->a[311222] = 5;
	v->a[311223] = anon_sym_PLUS;
	v->a[311224] = anon_sym_DASH;
	v->a[311225] = anon_sym_STAR;
	v->a[311226] = anon_sym_SLASH;
	v->a[311227] = anon_sym_PERCENT;
	v->a[311228] = 6;
	v->a[311229] = actions(71);
	v->a[311230] = 1;
	v->a[311231] = sym_comment;
	v->a[311232] = actions(9644);
	v->a[311233] = 1;
	v->a[311234] = anon_sym_DOLLAR_LBRACE;
	v->a[311235] = actions(9646);
	v->a[311236] = 1;
	v->a[311237] = anon_sym_BQUOTE;
	v->a[311238] = actions(9648);
	v->a[311239] = 1;
	small_parse_table_15562(v);
}

void	small_parse_table_15562(t_small_parse_table_array *v)
{
	v->a[311240] = anon_sym_DOLLAR_BQUOTE;
	v->a[311241] = actions(14538);
	v->a[311242] = 1;
	v->a[311243] = anon_sym_DOLLAR_LPAREN;
	v->a[311244] = state(4386);
	v->a[311245] = 2;
	v->a[311246] = sym_expansion;
	v->a[311247] = sym_command_substitution;
	v->a[311248] = 6;
	v->a[311249] = actions(71);
	v->a[311250] = 1;
	v->a[311251] = sym_comment;
	v->a[311252] = actions(14488);
	v->a[311253] = 1;
	v->a[311254] = anon_sym_elif;
	v->a[311255] = actions(14490);
	v->a[311256] = 1;
	v->a[311257] = anon_sym_else;
	v->a[311258] = actions(14540);
	v->a[311259] = 1;
	small_parse_table_15563(v);
}

void	small_parse_table_15563(t_small_parse_table_array *v)
{
	v->a[311260] = anon_sym_fi;
	v->a[311261] = state(7480);
	v->a[311262] = 1;
	v->a[311263] = sym_else_clause;
	v->a[311264] = state(6400);
	v->a[311265] = 2;
	v->a[311266] = sym_elif_clause;
	v->a[311267] = aux_sym_if_statement_repeat1;
	v->a[311268] = 6;
	v->a[311269] = actions(71);
	v->a[311270] = 1;
	v->a[311271] = sym_comment;
	v->a[311272] = actions(125);
	v->a[311273] = 1;
	v->a[311274] = anon_sym_DOLLAR_LBRACE;
	v->a[311275] = actions(129);
	v->a[311276] = 1;
	v->a[311277] = anon_sym_BQUOTE;
	v->a[311278] = actions(131);
	v->a[311279] = 1;
	small_parse_table_15564(v);
}

void	small_parse_table_15564(t_small_parse_table_array *v)
{
	v->a[311280] = anon_sym_DOLLAR_BQUOTE;
	v->a[311281] = actions(14542);
	v->a[311282] = 1;
	v->a[311283] = anon_sym_DOLLAR_LPAREN;
	v->a[311284] = state(484);
	v->a[311285] = 2;
	v->a[311286] = sym_expansion;
	v->a[311287] = sym_command_substitution;
	v->a[311288] = 6;
	v->a[311289] = actions(71);
	v->a[311290] = 1;
	v->a[311291] = sym_comment;
	v->a[311292] = actions(7234);
	v->a[311293] = 1;
	v->a[311294] = anon_sym_DOLLAR_LBRACE;
	v->a[311295] = actions(7236);
	v->a[311296] = 1;
	v->a[311297] = anon_sym_BQUOTE;
	v->a[311298] = actions(7238);
	v->a[311299] = 1;
	small_parse_table_15565(v);
}

/* EOF small_parse_table_3112.c */
