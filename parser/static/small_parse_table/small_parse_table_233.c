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
	v->a[23300] = sym_word;
	v->a[23301] = anon_sym_SEMI;
	v->a[23302] = 7;
	v->a[23303] = actions(3);
	v->a[23304] = 1;
	v->a[23305] = sym_comment;
	v->a[23306] = actions(580);
	v->a[23307] = 1;
	v->a[23308] = anon_sym_PIPE;
	v->a[23309] = actions(1037);
	v->a[23310] = 1;
	v->a[23311] = sym_variable_name;
	v->a[23312] = state(1277);
	v->a[23313] = 2;
	v->a[23314] = sym_variable_assignment;
	v->a[23315] = aux_sym__variable_assignments_repeat1;
	v->a[23316] = state(1225);
	v->a[23317] = 3;
	v->a[23318] = sym_file_redirect;
	v->a[23319] = sym_heredoc_redirect;
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = aux_sym_redirected_statement_repeat1;
	v->a[23321] = actions(816);
	v->a[23322] = 4;
	v->a[23323] = anon_sym_AMP_AMP;
	v->a[23324] = anon_sym_PIPE_PIPE;
	v->a[23325] = anon_sym_LT_LT;
	v->a[23326] = aux_sym_heredoc_redirect_token1;
	v->a[23327] = actions(576);
	v->a[23328] = 12;
	v->a[23329] = anon_sym_LT;
	v->a[23330] = anon_sym_GT;
	v->a[23331] = anon_sym_GT_GT;
	v->a[23332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23333] = anon_sym_DOLLAR;
	v->a[23334] = anon_sym_DQUOTE;
	v->a[23335] = sym_raw_string;
	v->a[23336] = sym_number;
	v->a[23337] = anon_sym_DOLLAR_LBRACE;
	v->a[23338] = anon_sym_DOLLAR_LPAREN;
	v->a[23339] = anon_sym_BQUOTE;
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = sym_word;
	v->a[23341] = 3;
	v->a[23342] = actions(3);
	v->a[23343] = 1;
	v->a[23344] = sym_comment;
	v->a[23345] = actions(869);
	v->a[23346] = 1;
	v->a[23347] = sym_variable_name;
	v->a[23348] = actions(867);
	v->a[23349] = 22;
	v->a[23350] = anon_sym_for;
	v->a[23351] = anon_sym_while;
	v->a[23352] = anon_sym_until;
	v->a[23353] = anon_sym_if;
	v->a[23354] = anon_sym_case;
	v->a[23355] = anon_sym_esac;
	v->a[23356] = anon_sym_LPAREN;
	v->a[23357] = anon_sym_SEMI_SEMI;
	v->a[23358] = anon_sym_LBRACE;
	v->a[23359] = anon_sym_BANG;
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = anon_sym_LT;
	v->a[23361] = anon_sym_GT;
	v->a[23362] = anon_sym_GT_GT;
	v->a[23363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23364] = anon_sym_DOLLAR;
	v->a[23365] = anon_sym_DQUOTE;
	v->a[23366] = sym_raw_string;
	v->a[23367] = sym_number;
	v->a[23368] = anon_sym_DOLLAR_LBRACE;
	v->a[23369] = anon_sym_DOLLAR_LPAREN;
	v->a[23370] = anon_sym_BQUOTE;
	v->a[23371] = sym_word;
	v->a[23372] = 3;
	v->a[23373] = actions(3);
	v->a[23374] = 1;
	v->a[23375] = sym_comment;
	v->a[23376] = actions(981);
	v->a[23377] = 2;
	v->a[23378] = sym__concat;
	v->a[23379] = sym_variable_name;
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = actions(973);
	v->a[23381] = 21;
	v->a[23382] = anon_sym_esac;
	v->a[23383] = anon_sym_PIPE;
	v->a[23384] = anon_sym_SEMI_SEMI;
	v->a[23385] = anon_sym_AMP_AMP;
	v->a[23386] = anon_sym_PIPE_PIPE;
	v->a[23387] = anon_sym_LT;
	v->a[23388] = anon_sym_GT;
	v->a[23389] = anon_sym_GT_GT;
	v->a[23390] = anon_sym_LT_LT;
	v->a[23391] = aux_sym_heredoc_redirect_token1;
	v->a[23392] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23393] = aux_sym_concatenation_token1;
	v->a[23394] = anon_sym_DOLLAR;
	v->a[23395] = anon_sym_DQUOTE;
	v->a[23396] = sym_raw_string;
	v->a[23397] = sym_number;
	v->a[23398] = anon_sym_DOLLAR_LBRACE;
	v->a[23399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
