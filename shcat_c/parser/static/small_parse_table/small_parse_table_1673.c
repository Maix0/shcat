/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1673.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8365(t_small_parse_table_array *v)
{
	v->a[167300] = 1;
	v->a[167301] = sym_extglob_pattern;
	v->a[167302] = actions(6512);
	v->a[167303] = 1;
	v->a[167304] = sym__brace_start;
	v->a[167305] = actions(7226);
	v->a[167306] = 1;
	v->a[167307] = anon_sym_DOLLAR_LBRACK;
	v->a[167308] = actions(7228);
	v->a[167309] = 1;
	v->a[167310] = sym__special_character;
	v->a[167311] = actions(7230);
	v->a[167312] = 1;
	v->a[167313] = anon_sym_DQUOTE;
	v->a[167314] = actions(7234);
	v->a[167315] = 1;
	v->a[167316] = anon_sym_DOLLAR_LBRACE;
	v->a[167317] = actions(7236);
	v->a[167318] = 1;
	v->a[167319] = anon_sym_BQUOTE;
	small_parse_table_8366(v);
}

void	small_parse_table_8366(t_small_parse_table_array *v)
{
	v->a[167320] = actions(7238);
	v->a[167321] = 1;
	v->a[167322] = anon_sym_DOLLAR_BQUOTE;
	v->a[167323] = actions(7547);
	v->a[167324] = 1;
	v->a[167325] = anon_sym_esac;
	v->a[167326] = state(6426);
	v->a[167327] = 1;
	v->a[167328] = aux_sym__literal_repeat1;
	v->a[167329] = state(7291);
	v->a[167330] = 1;
	v->a[167331] = sym_last_case_item;
	v->a[167332] = actions(7224);
	v->a[167333] = 2;
	v->a[167334] = anon_sym_LPAREN_LPAREN;
	v->a[167335] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[167336] = actions(7232);
	v->a[167337] = 2;
	v->a[167338] = sym_raw_string;
	v->a[167339] = sym_ansi_c_string;
	small_parse_table_8367(v);
}

void	small_parse_table_8367(t_small_parse_table_array *v)
{
	v->a[167340] = actions(7240);
	v->a[167341] = 2;
	v->a[167342] = anon_sym_LT_LPAREN;
	v->a[167343] = anon_sym_GT_LPAREN;
	v->a[167344] = state(3438);
	v->a[167345] = 2;
	v->a[167346] = sym_case_item;
	v->a[167347] = aux_sym_case_statement_repeat1;
	v->a[167348] = state(6695);
	v->a[167349] = 2;
	v->a[167350] = sym_concatenation;
	v->a[167351] = sym__extglob_blob;
	v->a[167352] = state(6303);
	v->a[167353] = 9;
	v->a[167354] = sym_arithmetic_expansion;
	v->a[167355] = sym_brace_expression;
	v->a[167356] = sym_string;
	v->a[167357] = sym_translated_string;
	v->a[167358] = sym_number;
	v->a[167359] = sym_simple_expansion;
	small_parse_table_8368(v);
}

void	small_parse_table_8368(t_small_parse_table_array *v)
{
	v->a[167360] = sym_expansion;
	v->a[167361] = sym_command_substitution;
	v->a[167362] = sym_process_substitution;
	v->a[167363] = 25;
	v->a[167364] = actions(71);
	v->a[167365] = 1;
	v->a[167366] = sym_comment;
	v->a[167367] = actions(6474);
	v->a[167368] = 1;
	v->a[167369] = sym_word;
	v->a[167370] = actions(6480);
	v->a[167371] = 1;
	v->a[167372] = anon_sym_LPAREN;
	v->a[167373] = actions(6488);
	v->a[167374] = 1;
	v->a[167375] = anon_sym_DOLLAR;
	v->a[167376] = actions(6494);
	v->a[167377] = 1;
	v->a[167378] = aux_sym_number_token1;
	v->a[167379] = actions(6496);
	small_parse_table_8369(v);
}

void	small_parse_table_8369(t_small_parse_table_array *v)
{
	v->a[167380] = 1;
	v->a[167381] = aux_sym_number_token2;
	v->a[167382] = actions(6500);
	v->a[167383] = 1;
	v->a[167384] = anon_sym_DOLLAR_LPAREN;
	v->a[167385] = actions(6508);
	v->a[167386] = 1;
	v->a[167387] = sym_test_operator;
	v->a[167388] = actions(6510);
	v->a[167389] = 1;
	v->a[167390] = sym_extglob_pattern;
	v->a[167391] = actions(6512);
	v->a[167392] = 1;
	v->a[167393] = sym__brace_start;
	v->a[167394] = actions(7226);
	v->a[167395] = 1;
	v->a[167396] = anon_sym_DOLLAR_LBRACK;
	v->a[167397] = actions(7228);
	v->a[167398] = 1;
	v->a[167399] = sym__special_character;
	small_parse_table_8370(v);
}

/* EOF small_parse_table_1673.c */
