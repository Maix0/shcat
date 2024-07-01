/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_233.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1165(t_small_parse_table_array *v)
{
	v->a[23300] = anon_sym_PIPE;
	v->a[23301] = actions(712);
	v->a[23302] = 1;
	v->a[23303] = anon_sym_AMP_AMP;
	v->a[23304] = actions(714);
	v->a[23305] = 1;
	v->a[23306] = anon_sym_PIPE_PIPE;
	v->a[23307] = actions(889);
	v->a[23308] = 1;
	v->a[23309] = anon_sym_EQ;
	v->a[23310] = actions(684);
	v->a[23311] = 2;
	v->a[23312] = anon_sym_GT_GT;
	v->a[23313] = anon_sym_LT_LT;
	v->a[23314] = actions(686);
	v->a[23315] = 2;
	v->a[23316] = anon_sym_PLUS;
	v->a[23317] = anon_sym_DASH;
	v->a[23318] = actions(690);
	v->a[23319] = 2;
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = anon_sym_PLUS_PLUS2;
	v->a[23321] = anon_sym_DASH_DASH2;
	v->a[23322] = actions(700);
	v->a[23323] = 2;
	v->a[23324] = anon_sym_LT;
	v->a[23325] = anon_sym_GT;
	v->a[23326] = actions(706);
	v->a[23327] = 2;
	v->a[23328] = anon_sym_EQ_EQ;
	v->a[23329] = anon_sym_BANG_EQ;
	v->a[23330] = actions(708);
	v->a[23331] = 2;
	v->a[23332] = anon_sym_LT_EQ;
	v->a[23333] = anon_sym_GT_EQ;
	v->a[23334] = actions(688);
	v->a[23335] = 3;
	v->a[23336] = anon_sym_STAR;
	v->a[23337] = anon_sym_SLASH;
	v->a[23338] = anon_sym_PERCENT;
	v->a[23339] = actions(891);
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = 13;
	v->a[23341] = anon_sym_RPAREN_RPAREN;
	v->a[23342] = anon_sym_PLUS_EQ;
	v->a[23343] = anon_sym_DASH_EQ;
	v->a[23344] = anon_sym_STAR_EQ;
	v->a[23345] = anon_sym_SLASH_EQ;
	v->a[23346] = anon_sym_PERCENT_EQ;
	v->a[23347] = anon_sym_LT_LT_EQ;
	v->a[23348] = anon_sym_GT_GT_EQ;
	v->a[23349] = anon_sym_AMP_EQ;
	v->a[23350] = anon_sym_CARET_EQ;
	v->a[23351] = anon_sym_PIPE_EQ;
	v->a[23352] = anon_sym_QMARK;
	v->a[23353] = anon_sym_COLON;
	v->a[23354] = 12;
	v->a[23355] = actions(3);
	v->a[23356] = 1;
	v->a[23357] = sym_comment;
	v->a[23358] = actions(495);
	v->a[23359] = 1;
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = sym_file_descriptor;
	v->a[23361] = actions(871);
	v->a[23362] = 1;
	v->a[23363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23364] = actions(873);
	v->a[23365] = 1;
	v->a[23366] = anon_sym_DOLLAR;
	v->a[23367] = actions(875);
	v->a[23368] = 1;
	v->a[23369] = anon_sym_DQUOTE;
	v->a[23370] = actions(877);
	v->a[23371] = 1;
	v->a[23372] = anon_sym_DOLLAR_LBRACE;
	v->a[23373] = actions(879);
	v->a[23374] = 1;
	v->a[23375] = anon_sym_DOLLAR_LPAREN;
	v->a[23376] = actions(881);
	v->a[23377] = 1;
	v->a[23378] = anon_sym_BQUOTE;
	v->a[23379] = state(240);
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = 2;
	v->a[23381] = sym_concatenation;
	v->a[23382] = aux_sym_for_statement_repeat1;
	v->a[23383] = actions(869);
	v->a[23384] = 3;
	v->a[23385] = sym_raw_string;
	v->a[23386] = sym_number;
	v->a[23387] = sym_word;
	v->a[23388] = state(485);
	v->a[23389] = 5;
	v->a[23390] = sym_arithmetic_expansion;
	v->a[23391] = sym_string;
	v->a[23392] = sym_simple_expansion;
	v->a[23393] = sym_expansion;
	v->a[23394] = sym_command_substitution;
	v->a[23395] = actions(497);
	v->a[23396] = 17;
	v->a[23397] = anon_sym_PIPE;
	v->a[23398] = anon_sym_RPAREN;
	v->a[23399] = anon_sym_SEMI_SEMI;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
