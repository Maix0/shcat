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
	v->a[12900] = 1;
	v->a[12901] = sym_while_statement;
	v->a[12902] = state(858);
	v->a[12903] = 1;
	v->a[12904] = sym_for_statement;
	v->a[12905] = state(859);
	v->a[12906] = 1;
	v->a[12907] = sym_redirected_statement;
	v->a[12908] = state(962);
	v->a[12909] = 1;
	v->a[12910] = sym_pipeline;
	v->a[12911] = state(1006);
	v->a[12912] = 1;
	v->a[12913] = aux_sym_redirected_statement_repeat2;
	v->a[12914] = state(1560);
	v->a[12915] = 1;
	v->a[12916] = sym__statement_not_pipeline;
	v->a[12917] = actions(11);
	v->a[12918] = 2;
	v->a[12919] = anon_sym_while;
	small_parse_table_646(v);
}

void	small_parse_table_646(t_small_parse_table_array *v)
{
	v->a[12920] = anon_sym_until;
	v->a[12921] = actions(59);
	v->a[12922] = 2;
	v->a[12923] = sym_raw_string;
	v->a[12924] = sym_number;
	v->a[12925] = actions(51);
	v->a[12926] = 3;
	v->a[12927] = anon_sym_LT;
	v->a[12928] = anon_sym_GT;
	v->a[12929] = anon_sym_GT_GT;
	v->a[12930] = state(401);
	v->a[12931] = 5;
	v->a[12932] = sym_arithmetic_expansion;
	v->a[12933] = sym_string;
	v->a[12934] = sym_simple_expansion;
	v->a[12935] = sym_expansion;
	v->a[12936] = sym_command_substitution;
	v->a[12937] = 29;
	v->a[12938] = actions(3);
	v->a[12939] = 1;
	small_parse_table_647(v);
}

void	small_parse_table_647(t_small_parse_table_array *v)
{
	v->a[12940] = sym_comment;
	v->a[12941] = actions(9);
	v->a[12942] = 1;
	v->a[12943] = anon_sym_for;
	v->a[12944] = actions(13);
	v->a[12945] = 1;
	v->a[12946] = anon_sym_if;
	v->a[12947] = actions(15);
	v->a[12948] = 1;
	v->a[12949] = anon_sym_case;
	v->a[12950] = actions(17);
	v->a[12951] = 1;
	v->a[12952] = anon_sym_LPAREN;
	v->a[12953] = actions(19);
	v->a[12954] = 1;
	v->a[12955] = anon_sym_LBRACE;
	v->a[12956] = actions(41);
	v->a[12957] = 1;
	v->a[12958] = sym_word;
	v->a[12959] = actions(49);
	small_parse_table_648(v);
}

void	small_parse_table_648(t_small_parse_table_array *v)
{
	v->a[12960] = 1;
	v->a[12961] = anon_sym_BANG;
	v->a[12962] = actions(53);
	v->a[12963] = 1;
	v->a[12964] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12965] = actions(55);
	v->a[12966] = 1;
	v->a[12967] = anon_sym_DOLLAR;
	v->a[12968] = actions(57);
	v->a[12969] = 1;
	v->a[12970] = anon_sym_DQUOTE;
	v->a[12971] = actions(61);
	v->a[12972] = 1;
	v->a[12973] = anon_sym_DOLLAR_LBRACE;
	v->a[12974] = actions(63);
	v->a[12975] = 1;
	v->a[12976] = anon_sym_DOLLAR_LPAREN;
	v->a[12977] = actions(65);
	v->a[12978] = 1;
	v->a[12979] = anon_sym_BQUOTE;
	small_parse_table_649(v);
}

void	small_parse_table_649(t_small_parse_table_array *v)
{
	v->a[12980] = actions(67);
	v->a[12981] = 1;
	v->a[12982] = sym_variable_name;
	v->a[12983] = state(81);
	v->a[12984] = 1;
	v->a[12985] = aux_sym__terminated_statement;
	v->a[12986] = state(185);
	v->a[12987] = 1;
	v->a[12988] = sym_command_name;
	v->a[12989] = state(237);
	v->a[12990] = 1;
	v->a[12991] = sym_variable_assignment;
	v->a[12992] = state(411);
	v->a[12993] = 1;
	v->a[12994] = aux_sym_command_repeat1;
	v->a[12995] = state(551);
	v->a[12996] = 1;
	v->a[12997] = sym_file_redirect;
	v->a[12998] = state(555);
	v->a[12999] = 1;
	small_parse_table_650(v);
}

/* EOF small_parse_table_129.c */
