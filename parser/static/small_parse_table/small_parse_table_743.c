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
	v->a[74300] = 1;
	v->a[74301] = sym__empty_value;
	v->a[74302] = state(1049);
	v->a[74303] = 1;
	v->a[74304] = sym_concatenation;
	v->a[74305] = actions(2871);
	v->a[74306] = 2;
	v->a[74307] = sym_raw_string;
	v->a[74308] = sym_word;
	v->a[74309] = state(990);
	v->a[74310] = 6;
	v->a[74311] = sym_arithmetic_expansion;
	v->a[74312] = sym_string;
	v->a[74313] = sym_number;
	v->a[74314] = sym_simple_expansion;
	v->a[74315] = sym_expansion;
	v->a[74316] = sym_command_substitution;
	v->a[74317] = 14;
	v->a[74318] = actions(3);
	v->a[74319] = 1;
	small_parse_table_3716(v);
}

void	small_parse_table_3716(t_small_parse_table_array *v)
{
	v->a[74320] = sym_comment;
	v->a[74321] = actions(2873);
	v->a[74322] = 1;
	v->a[74323] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74324] = actions(2875);
	v->a[74325] = 1;
	v->a[74326] = anon_sym_DOLLAR;
	v->a[74327] = actions(2877);
	v->a[74328] = 1;
	v->a[74329] = anon_sym_DQUOTE;
	v->a[74330] = actions(2879);
	v->a[74331] = 1;
	v->a[74332] = aux_sym_number_token1;
	v->a[74333] = actions(2881);
	v->a[74334] = 1;
	v->a[74335] = aux_sym_number_token2;
	v->a[74336] = actions(2883);
	v->a[74337] = 1;
	v->a[74338] = anon_sym_DOLLAR_LBRACE;
	v->a[74339] = actions(2885);
	small_parse_table_3717(v);
}

void	small_parse_table_3717(t_small_parse_table_array *v)
{
	v->a[74340] = 1;
	v->a[74341] = anon_sym_DOLLAR_LPAREN;
	v->a[74342] = actions(2887);
	v->a[74343] = 1;
	v->a[74344] = anon_sym_BQUOTE;
	v->a[74345] = actions(2889);
	v->a[74346] = 1;
	v->a[74347] = sym__comment_word;
	v->a[74348] = actions(2891);
	v->a[74349] = 1;
	v->a[74350] = sym__empty_value;
	v->a[74351] = state(1049);
	v->a[74352] = 1;
	v->a[74353] = sym_concatenation;
	v->a[74354] = actions(2893);
	v->a[74355] = 2;
	v->a[74356] = sym_raw_string;
	v->a[74357] = sym_word;
	v->a[74358] = state(975);
	v->a[74359] = 6;
	small_parse_table_3718(v);
}

void	small_parse_table_3718(t_small_parse_table_array *v)
{
	v->a[74360] = sym_arithmetic_expansion;
	v->a[74361] = sym_string;
	v->a[74362] = sym_number;
	v->a[74363] = sym_simple_expansion;
	v->a[74364] = sym_expansion;
	v->a[74365] = sym_command_substitution;
	v->a[74366] = 14;
	v->a[74367] = actions(3);
	v->a[74368] = 1;
	v->a[74369] = sym_comment;
	v->a[74370] = actions(933);
	v->a[74371] = 1;
	v->a[74372] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74373] = actions(935);
	v->a[74374] = 1;
	v->a[74375] = anon_sym_DOLLAR;
	v->a[74376] = actions(937);
	v->a[74377] = 1;
	v->a[74378] = anon_sym_DQUOTE;
	v->a[74379] = actions(939);
	small_parse_table_3719(v);
}

void	small_parse_table_3719(t_small_parse_table_array *v)
{
	v->a[74380] = 1;
	v->a[74381] = aux_sym_number_token1;
	v->a[74382] = actions(941);
	v->a[74383] = 1;
	v->a[74384] = aux_sym_number_token2;
	v->a[74385] = actions(943);
	v->a[74386] = 1;
	v->a[74387] = anon_sym_DOLLAR_LBRACE;
	v->a[74388] = actions(945);
	v->a[74389] = 1;
	v->a[74390] = anon_sym_DOLLAR_LPAREN;
	v->a[74391] = actions(947);
	v->a[74392] = 1;
	v->a[74393] = anon_sym_BQUOTE;
	v->a[74394] = actions(2895);
	v->a[74395] = 1;
	v->a[74396] = aux_sym_heredoc_redirect_token1;
	v->a[74397] = state(1348);
	v->a[74398] = 1;
	v->a[74399] = aux_sym__heredoc_command;
	small_parse_table_3720(v);
}

/* EOF small_parse_table_743.c */
