/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_553.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2765(t_small_parse_table_array *v)
{
	v->a[55300] = state(781);
	v->a[55301] = 1;
	v->a[55302] = sym_terminator;
	v->a[55303] = actions(744);
	v->a[55304] = 2;
	v->a[55305] = anon_sym_LT_LT;
	v->a[55306] = anon_sym_LT_LT_DASH;
	v->a[55307] = actions(990);
	v->a[55308] = 2;
	v->a[55309] = anon_sym_AMP_AMP;
	v->a[55310] = anon_sym_PIPE_PIPE;
	v->a[55311] = actions(740);
	v->a[55312] = 3;
	v->a[55313] = anon_sym_SEMI_SEMI;
	v->a[55314] = anon_sym_AMP;
	v->a[55315] = anon_sym_SEMI;
	v->a[55316] = state(1059);
	v->a[55317] = 3;
	v->a[55318] = sym_file_redirect;
	v->a[55319] = sym_heredoc_redirect;
	small_parse_table_2766(v);
}

void	small_parse_table_2766(t_small_parse_table_array *v)
{
	v->a[55320] = aux_sym_redirected_statement_repeat1;
	v->a[55321] = actions(1863);
	v->a[55322] = 7;
	v->a[55323] = anon_sym_LT;
	v->a[55324] = anon_sym_GT;
	v->a[55325] = anon_sym_GT_GT;
	v->a[55326] = anon_sym_LT_AMP;
	v->a[55327] = anon_sym_GT_AMP;
	v->a[55328] = anon_sym_GT_PIPE;
	v->a[55329] = anon_sym_LT_GT;
	v->a[55330] = 16;
	v->a[55331] = actions(3);
	v->a[55332] = 1;
	v->a[55333] = sym_comment;
	v->a[55334] = actions(1634);
	v->a[55335] = 1;
	v->a[55336] = anon_sym_LPAREN;
	v->a[55337] = actions(1638);
	v->a[55338] = 1;
	v->a[55339] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2767(v);
}

void	small_parse_table_2767(t_small_parse_table_array *v)
{
	v->a[55340] = actions(1640);
	v->a[55341] = 1;
	v->a[55342] = anon_sym_DOLLAR;
	v->a[55343] = actions(1642);
	v->a[55344] = 1;
	v->a[55345] = anon_sym_DQUOTE;
	v->a[55346] = actions(1644);
	v->a[55347] = 1;
	v->a[55348] = anon_sym_DOLLAR_LBRACE;
	v->a[55349] = actions(1646);
	v->a[55350] = 1;
	v->a[55351] = anon_sym_DOLLAR_LPAREN;
	v->a[55352] = actions(1648);
	v->a[55353] = 1;
	v->a[55354] = anon_sym_BQUOTE;
	v->a[55355] = actions(1650);
	v->a[55356] = 1;
	v->a[55357] = sym_extglob_pattern;
	v->a[55358] = actions(1662);
	v->a[55359] = 1;
	small_parse_table_2768(v);
}

void	small_parse_table_2768(t_small_parse_table_array *v)
{
	v->a[55360] = anon_sym_esac;
	v->a[55361] = state(1095);
	v->a[55362] = 1;
	v->a[55363] = aux_sym_case_statement_repeat1;
	v->a[55364] = state(1713);
	v->a[55365] = 1;
	v->a[55366] = sym_case_item;
	v->a[55367] = state(2079);
	v->a[55368] = 1;
	v->a[55369] = sym__case_item_last;
	v->a[55370] = state(1871);
	v->a[55371] = 2;
	v->a[55372] = sym_concatenation;
	v->a[55373] = sym__extglob_blob;
	v->a[55374] = actions(1630);
	v->a[55375] = 3;
	v->a[55376] = sym_raw_string;
	v->a[55377] = sym_number;
	v->a[55378] = sym_word;
	v->a[55379] = state(1804);
	small_parse_table_2769(v);
}

void	small_parse_table_2769(t_small_parse_table_array *v)
{
	v->a[55380] = 5;
	v->a[55381] = sym_arithmetic_expansion;
	v->a[55382] = sym_string;
	v->a[55383] = sym_simple_expansion;
	v->a[55384] = sym_expansion;
	v->a[55385] = sym_command_substitution;
	v->a[55386] = 11;
	v->a[55387] = actions(3);
	v->a[55388] = 1;
	v->a[55389] = sym_comment;
	v->a[55390] = actions(736);
	v->a[55391] = 1;
	v->a[55392] = anon_sym_PIPE;
	v->a[55393] = actions(842);
	v->a[55394] = 1;
	v->a[55395] = anon_sym_BQUOTE;
	v->a[55396] = actions(1865);
	v->a[55397] = 1;
	v->a[55398] = aux_sym_heredoc_redirect_token1;
	v->a[55399] = actions(1867);
	small_parse_table_2770(v);
}

/* EOF small_parse_table_553.c */
