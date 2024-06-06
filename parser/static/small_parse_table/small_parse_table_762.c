/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_762.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3810(t_small_parse_table_array *v)
{
	v->a[76200] = aux_sym_number_token1;
	v->a[76201] = actions(4348);
	v->a[76202] = 1;
	v->a[76203] = aux_sym_number_token2;
	v->a[76204] = actions(4350);
	v->a[76205] = 1;
	v->a[76206] = anon_sym_DOLLAR_LBRACE;
	v->a[76207] = actions(4352);
	v->a[76208] = 1;
	v->a[76209] = anon_sym_DOLLAR_LPAREN;
	v->a[76210] = actions(4354);
	v->a[76211] = 1;
	v->a[76212] = anon_sym_BQUOTE;
	v->a[76213] = actions(4356);
	v->a[76214] = 1;
	v->a[76215] = anon_sym_DOLLAR_BQUOTE;
	v->a[76216] = actions(4358);
	v->a[76217] = 1;
	v->a[76218] = sym_test_operator;
	v->a[76219] = actions(4360);
	small_parse_table_3811(v);
}

void	small_parse_table_3811(t_small_parse_table_array *v)
{
	v->a[76220] = 1;
	v->a[76221] = sym_extglob_pattern;
	v->a[76222] = actions(4362);
	v->a[76223] = 1;
	v->a[76224] = sym__brace_start;
	v->a[76225] = actions(4470);
	v->a[76226] = 1;
	v->a[76227] = anon_sym_esac;
	v->a[76228] = actions(4474);
	v->a[76229] = 1;
	v->a[76230] = aux_sym_heredoc_redirect_token1;
	v->a[76231] = state(3393);
	v->a[76232] = 1;
	v->a[76233] = aux_sym__literal_repeat1;
	v->a[76234] = state(3979);
	v->a[76235] = 1;
	v->a[76236] = sym_last_case_item;
	v->a[76237] = actions(4328);
	v->a[76238] = 2;
	v->a[76239] = sym_raw_string;
	small_parse_table_3812(v);
}

void	small_parse_table_3812(t_small_parse_table_array *v)
{
	v->a[76240] = sym_word;
	v->a[76241] = state(1810);
	v->a[76242] = 2;
	v->a[76243] = sym_case_item;
	v->a[76244] = aux_sym_case_statement_repeat1;
	v->a[76245] = state(3472);
	v->a[76246] = 2;
	v->a[76247] = sym_concatenation;
	v->a[76248] = sym__extglob_blob;
	v->a[76249] = actions(4472);
	v->a[76250] = 3;
	v->a[76251] = anon_sym_SEMI_SEMI;
	v->a[76252] = anon_sym_AMP;
	v->a[76253] = anon_sym_SEMI;
	v->a[76254] = state(3295);
	v->a[76255] = 7;
	v->a[76256] = sym_arithmetic_expansion;
	v->a[76257] = sym_brace_expression;
	v->a[76258] = sym_string;
	v->a[76259] = sym_number;
	small_parse_table_3813(v);
}

void	small_parse_table_3813(t_small_parse_table_array *v)
{
	v->a[76260] = sym_simple_expansion;
	v->a[76261] = sym_expansion;
	v->a[76262] = sym_command_substitution;
	v->a[76263] = 13;
	v->a[76264] = actions(57);
	v->a[76265] = 1;
	v->a[76266] = sym_comment;
	v->a[76267] = actions(4235);
	v->a[76268] = 1;
	v->a[76269] = anon_sym_EQ;
	v->a[76270] = actions(4476);
	v->a[76271] = 1;
	v->a[76272] = anon_sym_PIPE;
	v->a[76273] = actions(4482);
	v->a[76274] = 1;
	v->a[76275] = anon_sym_CARET;
	v->a[76276] = actions(4484);
	v->a[76277] = 1;
	v->a[76278] = anon_sym_AMP;
	v->a[76279] = actions(4478);
	small_parse_table_3814(v);
}

void	small_parse_table_3814(t_small_parse_table_array *v)
{
	v->a[76280] = 2;
	v->a[76281] = anon_sym_LT;
	v->a[76282] = anon_sym_GT;
	v->a[76283] = actions(4480);
	v->a[76284] = 2;
	v->a[76285] = anon_sym_GT_GT;
	v->a[76286] = anon_sym_LT_LT;
	v->a[76287] = actions(4486);
	v->a[76288] = 2;
	v->a[76289] = anon_sym_EQ_EQ;
	v->a[76290] = anon_sym_BANG_EQ;
	v->a[76291] = actions(4488);
	v->a[76292] = 2;
	v->a[76293] = anon_sym_LT_EQ;
	v->a[76294] = anon_sym_GT_EQ;
	v->a[76295] = actions(4490);
	v->a[76296] = 2;
	v->a[76297] = anon_sym_PLUS;
	v->a[76298] = anon_sym_DASH;
	v->a[76299] = actions(4494);
	small_parse_table_3815(v);
}

/* EOF small_parse_table_762.c */
