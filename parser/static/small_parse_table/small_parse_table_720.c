/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_720.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3600(t_small_parse_table_array *v)
{
	v->a[72000] = sym_string;
	v->a[72001] = sym_number;
	v->a[72002] = sym_simple_expansion;
	v->a[72003] = sym_expansion;
	v->a[72004] = sym_command_substitution;
	v->a[72005] = 24;
	v->a[72006] = actions(3);
	v->a[72007] = 1;
	v->a[72008] = sym_comment;
	v->a[72009] = actions(4332);
	v->a[72010] = 1;
	v->a[72011] = anon_sym_LPAREN;
	v->a[72012] = actions(4338);
	v->a[72013] = 1;
	v->a[72014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72015] = actions(4340);
	v->a[72016] = 1;
	v->a[72017] = anon_sym_DOLLAR;
	v->a[72018] = actions(4342);
	v->a[72019] = 1;
	small_parse_table_3601(v);
}

void	small_parse_table_3601(t_small_parse_table_array *v)
{
	v->a[72020] = sym__special_character;
	v->a[72021] = actions(4344);
	v->a[72022] = 1;
	v->a[72023] = anon_sym_DQUOTE;
	v->a[72024] = actions(4346);
	v->a[72025] = 1;
	v->a[72026] = aux_sym_number_token1;
	v->a[72027] = actions(4348);
	v->a[72028] = 1;
	v->a[72029] = aux_sym_number_token2;
	v->a[72030] = actions(4350);
	v->a[72031] = 1;
	v->a[72032] = anon_sym_DOLLAR_LBRACE;
	v->a[72033] = actions(4352);
	v->a[72034] = 1;
	v->a[72035] = anon_sym_DOLLAR_LPAREN;
	v->a[72036] = actions(4354);
	v->a[72037] = 1;
	v->a[72038] = anon_sym_BQUOTE;
	v->a[72039] = actions(4356);
	small_parse_table_3602(v);
}

void	small_parse_table_3602(t_small_parse_table_array *v)
{
	v->a[72040] = 1;
	v->a[72041] = anon_sym_DOLLAR_BQUOTE;
	v->a[72042] = actions(4358);
	v->a[72043] = 1;
	v->a[72044] = sym_test_operator;
	v->a[72045] = actions(4360);
	v->a[72046] = 1;
	v->a[72047] = sym_extglob_pattern;
	v->a[72048] = actions(4362);
	v->a[72049] = 1;
	v->a[72050] = sym__brace_start;
	v->a[72051] = actions(4364);
	v->a[72052] = 1;
	v->a[72053] = anon_sym_esac;
	v->a[72054] = actions(4368);
	v->a[72055] = 1;
	v->a[72056] = aux_sym_heredoc_redirect_token1;
	v->a[72057] = state(3393);
	v->a[72058] = 1;
	v->a[72059] = aux_sym__literal_repeat1;
	small_parse_table_3603(v);
}

void	small_parse_table_3603(t_small_parse_table_array *v)
{
	v->a[72060] = state(3867);
	v->a[72061] = 1;
	v->a[72062] = sym_last_case_item;
	v->a[72063] = actions(4328);
	v->a[72064] = 2;
	v->a[72065] = sym_raw_string;
	v->a[72066] = sym_word;
	v->a[72067] = state(1747);
	v->a[72068] = 2;
	v->a[72069] = sym_case_item;
	v->a[72070] = aux_sym_case_statement_repeat1;
	v->a[72071] = state(3472);
	v->a[72072] = 2;
	v->a[72073] = sym_concatenation;
	v->a[72074] = sym__extglob_blob;
	v->a[72075] = actions(4366);
	v->a[72076] = 3;
	v->a[72077] = anon_sym_SEMI_SEMI;
	v->a[72078] = anon_sym_AMP;
	v->a[72079] = anon_sym_SEMI;
	small_parse_table_3604(v);
}

void	small_parse_table_3604(t_small_parse_table_array *v)
{
	v->a[72080] = state(3295);
	v->a[72081] = 7;
	v->a[72082] = sym_arithmetic_expansion;
	v->a[72083] = sym_brace_expression;
	v->a[72084] = sym_string;
	v->a[72085] = sym_number;
	v->a[72086] = sym_simple_expansion;
	v->a[72087] = sym_expansion;
	v->a[72088] = sym_command_substitution;
	v->a[72089] = 24;
	v->a[72090] = actions(3);
	v->a[72091] = 1;
	v->a[72092] = sym_comment;
	v->a[72093] = actions(4332);
	v->a[72094] = 1;
	v->a[72095] = anon_sym_LPAREN;
	v->a[72096] = actions(4338);
	v->a[72097] = 1;
	v->a[72098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72099] = actions(4340);
	small_parse_table_3605(v);
}

/* EOF small_parse_table_720.c */
