/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2303.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11515(t_small_parse_table_array *v)
{
	v->a[230300] = anon_sym_DOLLAR;
	v->a[230301] = actions(9544);
	v->a[230302] = 2;
	v->a[230303] = anon_sym_LPAREN_LPAREN;
	v->a[230304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[230305] = actions(9560);
	v->a[230306] = 2;
	v->a[230307] = anon_sym_LT_LPAREN;
	v->a[230308] = anon_sym_GT_LPAREN;
	v->a[230309] = actions(10302);
	v->a[230310] = 2;
	v->a[230311] = sym_test_operator;
	v->a[230312] = sym__special_character;
	v->a[230313] = actions(10304);
	v->a[230314] = 3;
	v->a[230315] = sym__bare_dollar;
	v->a[230316] = sym_raw_string;
	v->a[230317] = sym_ansi_c_string;
	v->a[230318] = state(5680);
	v->a[230319] = 9;
	small_parse_table_11516(v);
}

void	small_parse_table_11516(t_small_parse_table_array *v)
{
	v->a[230320] = sym_arithmetic_expansion;
	v->a[230321] = sym_brace_expression;
	v->a[230322] = sym_string;
	v->a[230323] = sym_translated_string;
	v->a[230324] = sym_number;
	v->a[230325] = sym_simple_expansion;
	v->a[230326] = sym_expansion;
	v->a[230327] = sym_command_substitution;
	v->a[230328] = sym_process_substitution;
	v->a[230329] = 18;
	v->a[230330] = actions(3);
	v->a[230331] = 1;
	v->a[230332] = sym_comment;
	v->a[230333] = actions(2636);
	v->a[230334] = 1;
	v->a[230335] = anon_sym_DOLLAR_LBRACK;
	v->a[230336] = actions(2642);
	v->a[230337] = 1;
	v->a[230338] = anon_sym_DQUOTE;
	v->a[230339] = actions(2646);
	small_parse_table_11517(v);
}

void	small_parse_table_11517(t_small_parse_table_array *v)
{
	v->a[230340] = 1;
	v->a[230341] = aux_sym_number_token1;
	v->a[230342] = actions(2648);
	v->a[230343] = 1;
	v->a[230344] = aux_sym_number_token2;
	v->a[230345] = actions(2650);
	v->a[230346] = 1;
	v->a[230347] = anon_sym_DOLLAR_LBRACE;
	v->a[230348] = actions(2652);
	v->a[230349] = 1;
	v->a[230350] = anon_sym_DOLLAR_LPAREN;
	v->a[230351] = actions(2654);
	v->a[230352] = 1;
	v->a[230353] = anon_sym_BQUOTE;
	v->a[230354] = actions(2656);
	v->a[230355] = 1;
	v->a[230356] = anon_sym_DOLLAR_BQUOTE;
	v->a[230357] = actions(2664);
	v->a[230358] = 1;
	v->a[230359] = sym__brace_start;
	small_parse_table_11518(v);
}

void	small_parse_table_11518(t_small_parse_table_array *v)
{
	v->a[230360] = actions(9620);
	v->a[230361] = 1;
	v->a[230362] = sym_word;
	v->a[230363] = actions(9626);
	v->a[230364] = 1;
	v->a[230365] = sym__comment_word;
	v->a[230366] = actions(10900);
	v->a[230367] = 1;
	v->a[230368] = anon_sym_DOLLAR;
	v->a[230369] = actions(2630);
	v->a[230370] = 2;
	v->a[230371] = anon_sym_LPAREN_LPAREN;
	v->a[230372] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[230373] = actions(2658);
	v->a[230374] = 2;
	v->a[230375] = anon_sym_LT_LPAREN;
	v->a[230376] = anon_sym_GT_LPAREN;
	v->a[230377] = actions(9622);
	v->a[230378] = 2;
	v->a[230379] = sym_test_operator;
	small_parse_table_11519(v);
}

void	small_parse_table_11519(t_small_parse_table_array *v)
{
	v->a[230380] = sym__special_character;
	v->a[230381] = actions(9624);
	v->a[230382] = 3;
	v->a[230383] = sym__bare_dollar;
	v->a[230384] = sym_raw_string;
	v->a[230385] = sym_ansi_c_string;
	v->a[230386] = state(2344);
	v->a[230387] = 9;
	v->a[230388] = sym_arithmetic_expansion;
	v->a[230389] = sym_brace_expression;
	v->a[230390] = sym_string;
	v->a[230391] = sym_translated_string;
	v->a[230392] = sym_number;
	v->a[230393] = sym_simple_expansion;
	v->a[230394] = sym_expansion;
	v->a[230395] = sym_command_substitution;
	v->a[230396] = sym_process_substitution;
	v->a[230397] = 21;
	v->a[230398] = actions(71);
	v->a[230399] = 1;
	small_parse_table_11520(v);
}

/* EOF small_parse_table_2303.c */
