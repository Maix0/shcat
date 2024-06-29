/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_743.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3715(t_small_parse_table_array *v)
{
	v->a[74300] = anon_sym_GT_AMP;
	v->a[74301] = anon_sym_GT_PIPE;
	v->a[74302] = anon_sym_LT_AMP_DASH;
	v->a[74303] = anon_sym_GT_AMP_DASH;
	v->a[74304] = anon_sym_LT_LT;
	v->a[74305] = anon_sym_LT_LT_DASH;
	v->a[74306] = anon_sym_AMP;
	v->a[74307] = anon_sym_SEMI;
	v->a[74308] = 3;
	v->a[74309] = actions(3);
	v->a[74310] = 1;
	v->a[74311] = sym_comment;
	v->a[74312] = actions(538);
	v->a[74313] = 2;
	v->a[74314] = sym_file_descriptor;
	v->a[74315] = aux_sym_heredoc_redirect_token1;
	v->a[74316] = actions(540);
	v->a[74317] = 19;
	v->a[74318] = anon_sym_esac;
	v->a[74319] = anon_sym_PIPE;
	small_parse_table_3716(v);
}

void	small_parse_table_3716(t_small_parse_table_array *v)
{
	v->a[74320] = anon_sym_SEMI_SEMI;
	v->a[74321] = anon_sym_AMP_AMP;
	v->a[74322] = anon_sym_PIPE_PIPE;
	v->a[74323] = anon_sym_LT;
	v->a[74324] = anon_sym_GT;
	v->a[74325] = anon_sym_GT_GT;
	v->a[74326] = anon_sym_AMP_GT;
	v->a[74327] = anon_sym_AMP_GT_GT;
	v->a[74328] = anon_sym_LT_AMP;
	v->a[74329] = anon_sym_GT_AMP;
	v->a[74330] = anon_sym_GT_PIPE;
	v->a[74331] = anon_sym_LT_AMP_DASH;
	v->a[74332] = anon_sym_GT_AMP_DASH;
	v->a[74333] = anon_sym_LT_LT;
	v->a[74334] = anon_sym_LT_LT_DASH;
	v->a[74335] = anon_sym_AMP;
	v->a[74336] = anon_sym_SEMI;
	v->a[74337] = 15;
	v->a[74338] = actions(3);
	v->a[74339] = 1;
	small_parse_table_3717(v);
}

void	small_parse_table_3717(t_small_parse_table_array *v)
{
	v->a[74340] = sym_comment;
	v->a[74341] = actions(1879);
	v->a[74342] = 1;
	v->a[74343] = anon_sym_LPAREN;
	v->a[74344] = actions(1883);
	v->a[74345] = 1;
	v->a[74346] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74347] = actions(1885);
	v->a[74348] = 1;
	v->a[74349] = anon_sym_DOLLAR;
	v->a[74350] = actions(1887);
	v->a[74351] = 1;
	v->a[74352] = anon_sym_DQUOTE;
	v->a[74353] = actions(1889);
	v->a[74354] = 1;
	v->a[74355] = anon_sym_DOLLAR_LBRACE;
	v->a[74356] = actions(1891);
	v->a[74357] = 1;
	v->a[74358] = anon_sym_DOLLAR_LPAREN;
	v->a[74359] = actions(1893);
	small_parse_table_3718(v);
}

void	small_parse_table_3718(t_small_parse_table_array *v)
{
	v->a[74360] = 1;
	v->a[74361] = anon_sym_BQUOTE;
	v->a[74362] = actions(1895);
	v->a[74363] = 1;
	v->a[74364] = sym_extglob_pattern;
	v->a[74365] = state(1396);
	v->a[74366] = 1;
	v->a[74367] = aux_sym_case_statement_repeat1;
	v->a[74368] = state(1923);
	v->a[74369] = 1;
	v->a[74370] = sym_case_item;
	v->a[74371] = state(2173);
	v->a[74372] = 1;
	v->a[74373] = sym__case_item_last;
	v->a[74374] = state(2078);
	v->a[74375] = 2;
	v->a[74376] = sym_concatenation;
	v->a[74377] = sym__extglob_blob;
	v->a[74378] = actions(1875);
	v->a[74379] = 3;
	small_parse_table_3719(v);
}

void	small_parse_table_3719(t_small_parse_table_array *v)
{
	v->a[74380] = sym_raw_string;
	v->a[74381] = sym_number;
	v->a[74382] = sym_word;
	v->a[74383] = state(2004);
	v->a[74384] = 5;
	v->a[74385] = sym_arithmetic_expansion;
	v->a[74386] = sym_string;
	v->a[74387] = sym_simple_expansion;
	v->a[74388] = sym_expansion;
	v->a[74389] = sym_command_substitution;
	v->a[74390] = 5;
	v->a[74391] = actions(3);
	v->a[74392] = 1;
	v->a[74393] = sym_comment;
	v->a[74394] = actions(2127);
	v->a[74395] = 1;
	v->a[74396] = sym_variable_name;
	v->a[74397] = actions(2125);
	v->a[74398] = 2;
	v->a[74399] = aux_sym__simple_variable_name_token1;
	small_parse_table_3720(v);
}

/* EOF small_parse_table_743.c */
