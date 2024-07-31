/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_129.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_645(t_small_parse_table_array *v)
{
	v->a[12900] = sym_pipeline;
	v->a[12901] = state(1015);
	v->a[12902] = 1;
	v->a[12903] = aux_sym_redirected_statement_repeat2;
	v->a[12904] = state(1610);
	v->a[12905] = 1;
	v->a[12906] = sym__statement_not_pipeline;
	v->a[12907] = actions(83);
	v->a[12908] = 2;
	v->a[12909] = anon_sym_while;
	v->a[12910] = anon_sym_until;
	v->a[12911] = actions(105);
	v->a[12912] = 2;
	v->a[12913] = sym_raw_string;
	v->a[12914] = sym_number;
	v->a[12915] = state(341);
	v->a[12916] = 5;
	v->a[12917] = sym_arithmetic_expansion;
	v->a[12918] = sym_string;
	v->a[12919] = sym_simple_expansion;
	small_parse_table_646(v);
}

void	small_parse_table_646(t_small_parse_table_array *v)
{
	v->a[12920] = sym_expansion;
	v->a[12921] = sym_command_substitution;
	v->a[12922] = actions(97);
	v->a[12923] = 7;
	v->a[12924] = anon_sym_LT;
	v->a[12925] = anon_sym_GT;
	v->a[12926] = anon_sym_GT_GT;
	v->a[12927] = anon_sym_LT_AMP;
	v->a[12928] = anon_sym_GT_AMP;
	v->a[12929] = anon_sym_GT_PIPE;
	v->a[12930] = anon_sym_LT_GT;
	v->a[12931] = 29;
	v->a[12932] = actions(3);
	v->a[12933] = 1;
	v->a[12934] = sym_comment;
	v->a[12935] = actions(9);
	v->a[12936] = 1;
	v->a[12937] = anon_sym_for;
	v->a[12938] = actions(13);
	v->a[12939] = 1;
	small_parse_table_647(v);
}

void	small_parse_table_647(t_small_parse_table_array *v)
{
	v->a[12940] = anon_sym_if;
	v->a[12941] = actions(15);
	v->a[12942] = 1;
	v->a[12943] = anon_sym_case;
	v->a[12944] = actions(17);
	v->a[12945] = 1;
	v->a[12946] = anon_sym_LPAREN;
	v->a[12947] = actions(19);
	v->a[12948] = 1;
	v->a[12949] = anon_sym_LBRACE;
	v->a[12950] = actions(41);
	v->a[12951] = 1;
	v->a[12952] = sym_word;
	v->a[12953] = actions(49);
	v->a[12954] = 1;
	v->a[12955] = anon_sym_BANG;
	v->a[12956] = actions(53);
	v->a[12957] = 1;
	v->a[12958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12959] = actions(55);
	small_parse_table_648(v);
}

void	small_parse_table_648(t_small_parse_table_array *v)
{
	v->a[12960] = 1;
	v->a[12961] = anon_sym_DOLLAR;
	v->a[12962] = actions(57);
	v->a[12963] = 1;
	v->a[12964] = anon_sym_DQUOTE;
	v->a[12965] = actions(61);
	v->a[12966] = 1;
	v->a[12967] = anon_sym_DOLLAR_LBRACE;
	v->a[12968] = actions(63);
	v->a[12969] = 1;
	v->a[12970] = anon_sym_DOLLAR_LPAREN;
	v->a[12971] = actions(65);
	v->a[12972] = 1;
	v->a[12973] = anon_sym_BQUOTE;
	v->a[12974] = actions(67);
	v->a[12975] = 1;
	v->a[12976] = sym_variable_name;
	v->a[12977] = state(47);
	v->a[12978] = 1;
	v->a[12979] = aux_sym__terminated_statement;
	small_parse_table_649(v);
}

void	small_parse_table_649(t_small_parse_table_array *v)
{
	v->a[12980] = state(271);
	v->a[12981] = 1;
	v->a[12982] = sym_command_name;
	v->a[12983] = state(302);
	v->a[12984] = 1;
	v->a[12985] = sym_variable_assignment;
	v->a[12986] = state(482);
	v->a[12987] = 1;
	v->a[12988] = aux_sym_command_repeat1;
	v->a[12989] = state(600);
	v->a[12990] = 1;
	v->a[12991] = sym_file_redirect;
	v->a[12992] = state(602);
	v->a[12993] = 1;
	v->a[12994] = sym_concatenation;
	v->a[12995] = state(980);
	v->a[12996] = 1;
	v->a[12997] = sym_pipeline;
	v->a[12998] = state(1068);
	v->a[12999] = 1;
	small_parse_table_650(v);
}

/* EOF small_parse_table_129.c */
