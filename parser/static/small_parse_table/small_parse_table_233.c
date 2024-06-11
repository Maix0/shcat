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
	v->a[23300] = ts_builtin_sym_end;
	v->a[23301] = state(366);
	v->a[23302] = 5;
	v->a[23303] = sym_arithmetic_expansion;
	v->a[23304] = sym_string;
	v->a[23305] = sym_simple_expansion;
	v->a[23306] = sym_expansion;
	v->a[23307] = sym_command_substitution;
	v->a[23308] = actions(719);
	v->a[23309] = 28;
	v->a[23310] = anon_sym_PIPE;
	v->a[23311] = anon_sym_SEMI_SEMI;
	v->a[23312] = anon_sym_AMP_AMP;
	v->a[23313] = anon_sym_PIPE_PIPE;
	v->a[23314] = anon_sym_LT;
	v->a[23315] = anon_sym_GT;
	v->a[23316] = anon_sym_GT_GT;
	v->a[23317] = anon_sym_AMP_GT;
	v->a[23318] = anon_sym_AMP_GT_GT;
	v->a[23319] = anon_sym_LT_AMP;
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = anon_sym_GT_AMP;
	v->a[23321] = anon_sym_GT_PIPE;
	v->a[23322] = anon_sym_LT_AMP_DASH;
	v->a[23323] = anon_sym_GT_AMP_DASH;
	v->a[23324] = anon_sym_LT_LT;
	v->a[23325] = anon_sym_LT_LT_DASH;
	v->a[23326] = aux_sym_heredoc_redirect_token1;
	v->a[23327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23328] = anon_sym_AMP;
	v->a[23329] = anon_sym_DOLLAR;
	v->a[23330] = anon_sym_DQUOTE;
	v->a[23331] = sym_raw_string;
	v->a[23332] = sym_number;
	v->a[23333] = anon_sym_DOLLAR_LBRACE;
	v->a[23334] = anon_sym_DOLLAR_LPAREN;
	v->a[23335] = anon_sym_BQUOTE;
	v->a[23336] = sym_word;
	v->a[23337] = anon_sym_SEMI;
	v->a[23338] = 5;
	v->a[23339] = actions(3);
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = 1;
	v->a[23341] = sym_comment;
	v->a[23342] = state(751);
	v->a[23343] = 1;
	v->a[23344] = sym_concatenation;
	v->a[23345] = actions(717);
	v->a[23346] = 2;
	v->a[23347] = sym_file_descriptor;
	v->a[23348] = sym_variable_name;
	v->a[23349] = state(410);
	v->a[23350] = 5;
	v->a[23351] = sym_arithmetic_expansion;
	v->a[23352] = sym_string;
	v->a[23353] = sym_simple_expansion;
	v->a[23354] = sym_expansion;
	v->a[23355] = sym_command_substitution;
	v->a[23356] = actions(719);
	v->a[23357] = 29;
	v->a[23358] = anon_sym_esac;
	v->a[23359] = anon_sym_PIPE;
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = anon_sym_SEMI_SEMI;
	v->a[23361] = anon_sym_AMP_AMP;
	v->a[23362] = anon_sym_PIPE_PIPE;
	v->a[23363] = anon_sym_LT;
	v->a[23364] = anon_sym_GT;
	v->a[23365] = anon_sym_GT_GT;
	v->a[23366] = anon_sym_AMP_GT;
	v->a[23367] = anon_sym_AMP_GT_GT;
	v->a[23368] = anon_sym_LT_AMP;
	v->a[23369] = anon_sym_GT_AMP;
	v->a[23370] = anon_sym_GT_PIPE;
	v->a[23371] = anon_sym_LT_AMP_DASH;
	v->a[23372] = anon_sym_GT_AMP_DASH;
	v->a[23373] = anon_sym_LT_LT;
	v->a[23374] = anon_sym_LT_LT_DASH;
	v->a[23375] = aux_sym_heredoc_redirect_token1;
	v->a[23376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23377] = anon_sym_AMP;
	v->a[23378] = anon_sym_DOLLAR;
	v->a[23379] = anon_sym_DQUOTE;
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = sym_raw_string;
	v->a[23381] = sym_number;
	v->a[23382] = anon_sym_DOLLAR_LBRACE;
	v->a[23383] = anon_sym_DOLLAR_LPAREN;
	v->a[23384] = anon_sym_BQUOTE;
	v->a[23385] = sym_word;
	v->a[23386] = anon_sym_SEMI;
	v->a[23387] = 5;
	v->a[23388] = actions(3);
	v->a[23389] = 1;
	v->a[23390] = sym_comment;
	v->a[23391] = state(753);
	v->a[23392] = 1;
	v->a[23393] = sym_concatenation;
	v->a[23394] = actions(713);
	v->a[23395] = 2;
	v->a[23396] = sym_file_descriptor;
	v->a[23397] = sym_variable_name;
	v->a[23398] = state(412);
	v->a[23399] = 5;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
