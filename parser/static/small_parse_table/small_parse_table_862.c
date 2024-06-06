/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_862.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4310(t_small_parse_table_array *v)
{
	v->a[86200] = anon_sym_LT;
	v->a[86201] = anon_sym_GT;
	v->a[86202] = anon_sym_AMP_GT;
	v->a[86203] = anon_sym_LT_AMP;
	v->a[86204] = anon_sym_GT_AMP;
	v->a[86205] = anon_sym_DOLLAR;
	v->a[86206] = aux_sym_number_token1;
	v->a[86207] = aux_sym_number_token2;
	v->a[86208] = anon_sym_DOLLAR_LPAREN;
	v->a[86209] = anon_sym_BQUOTE;
	v->a[86210] = sym_word;
	v->a[86211] = actions(2664);
	v->a[86212] = 15;
	v->a[86213] = sym_file_descriptor;
	v->a[86214] = sym_variable_name;
	v->a[86215] = sym_test_operator;
	v->a[86216] = sym__brace_start;
	v->a[86217] = anon_sym_GT_GT;
	v->a[86218] = anon_sym_AMP_GT_GT;
	v->a[86219] = anon_sym_GT_PIPE;
	small_parse_table_4311(v);
}

void	small_parse_table_4311(t_small_parse_table_array *v)
{
	v->a[86220] = anon_sym_LT_AMP_DASH;
	v->a[86221] = anon_sym_GT_AMP_DASH;
	v->a[86222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86223] = sym__special_character;
	v->a[86224] = anon_sym_DQUOTE;
	v->a[86225] = sym_raw_string;
	v->a[86226] = anon_sym_DOLLAR_LBRACE;
	v->a[86227] = anon_sym_DOLLAR_BQUOTE;
	v->a[86228] = 21;
	v->a[86229] = actions(57);
	v->a[86230] = 1;
	v->a[86231] = sym_comment;
	v->a[86232] = actions(4328);
	v->a[86233] = 1;
	v->a[86234] = sym_word;
	v->a[86235] = actions(4340);
	v->a[86236] = 1;
	v->a[86237] = anon_sym_DOLLAR;
	v->a[86238] = actions(4346);
	v->a[86239] = 1;
	small_parse_table_4312(v);
}

void	small_parse_table_4312(t_small_parse_table_array *v)
{
	v->a[86240] = aux_sym_number_token1;
	v->a[86241] = actions(4348);
	v->a[86242] = 1;
	v->a[86243] = aux_sym_number_token2;
	v->a[86244] = actions(4352);
	v->a[86245] = 1;
	v->a[86246] = anon_sym_DOLLAR_LPAREN;
	v->a[86247] = actions(4360);
	v->a[86248] = 1;
	v->a[86249] = sym_extglob_pattern;
	v->a[86250] = actions(4362);
	v->a[86251] = 1;
	v->a[86252] = sym__brace_start;
	v->a[86253] = actions(4548);
	v->a[86254] = 1;
	v->a[86255] = anon_sym_LPAREN;
	v->a[86256] = actions(4550);
	v->a[86257] = 1;
	v->a[86258] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86259] = actions(4552);
	small_parse_table_4313(v);
}

void	small_parse_table_4313(t_small_parse_table_array *v)
{
	v->a[86260] = 1;
	v->a[86261] = sym__special_character;
	v->a[86262] = actions(4554);
	v->a[86263] = 1;
	v->a[86264] = anon_sym_DQUOTE;
	v->a[86265] = actions(4556);
	v->a[86266] = 1;
	v->a[86267] = anon_sym_DOLLAR_LBRACE;
	v->a[86268] = actions(4558);
	v->a[86269] = 1;
	v->a[86270] = anon_sym_BQUOTE;
	v->a[86271] = actions(4560);
	v->a[86272] = 1;
	v->a[86273] = anon_sym_DOLLAR_BQUOTE;
	v->a[86274] = state(3393);
	v->a[86275] = 1;
	v->a[86276] = aux_sym__literal_repeat1;
	v->a[86277] = state(3946);
	v->a[86278] = 1;
	v->a[86279] = sym_last_case_item;
	small_parse_table_4314(v);
}

void	small_parse_table_4314(t_small_parse_table_array *v)
{
	v->a[86280] = actions(4358);
	v->a[86281] = 2;
	v->a[86282] = sym_test_operator;
	v->a[86283] = sym_raw_string;
	v->a[86284] = state(1881);
	v->a[86285] = 2;
	v->a[86286] = sym_case_item;
	v->a[86287] = aux_sym_case_statement_repeat1;
	v->a[86288] = state(3472);
	v->a[86289] = 2;
	v->a[86290] = sym_concatenation;
	v->a[86291] = sym__extglob_blob;
	v->a[86292] = state(3295);
	v->a[86293] = 7;
	v->a[86294] = sym_arithmetic_expansion;
	v->a[86295] = sym_brace_expression;
	v->a[86296] = sym_string;
	v->a[86297] = sym_number;
	v->a[86298] = sym_simple_expansion;
	v->a[86299] = sym_expansion;
	small_parse_table_4315(v);
}

/* EOF small_parse_table_862.c */
