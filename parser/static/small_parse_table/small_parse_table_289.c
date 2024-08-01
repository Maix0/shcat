/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_289.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1445(t_small_parse_table_array *v)
{
	v->a[28900] = sym_number;
	v->a[28901] = anon_sym_DOLLAR_LBRACE;
	v->a[28902] = anon_sym_DOLLAR_LPAREN;
	v->a[28903] = anon_sym_BQUOTE;
	v->a[28904] = sym_word;
	v->a[28905] = anon_sym_SEMI;
	v->a[28906] = 16;
	v->a[28907] = actions(3);
	v->a[28908] = 1;
	v->a[28909] = sym_comment;
	v->a[28910] = actions(778);
	v->a[28911] = 1;
	v->a[28912] = anon_sym_LPAREN;
	v->a[28913] = actions(782);
	v->a[28914] = 1;
	v->a[28915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28916] = actions(784);
	v->a[28917] = 1;
	v->a[28918] = anon_sym_DOLLAR;
	v->a[28919] = actions(786);
	small_parse_table_1446(v);
}

void	small_parse_table_1446(t_small_parse_table_array *v)
{
	v->a[28920] = 1;
	v->a[28921] = anon_sym_DQUOTE;
	v->a[28922] = actions(788);
	v->a[28923] = 1;
	v->a[28924] = anon_sym_DOLLAR_LBRACE;
	v->a[28925] = actions(790);
	v->a[28926] = 1;
	v->a[28927] = anon_sym_DOLLAR_LPAREN;
	v->a[28928] = actions(792);
	v->a[28929] = 1;
	v->a[28930] = anon_sym_BQUOTE;
	v->a[28931] = actions(794);
	v->a[28932] = 1;
	v->a[28933] = sym_extglob_pattern;
	v->a[28934] = actions(804);
	v->a[28935] = 1;
	v->a[28936] = anon_sym_esac;
	v->a[28937] = state(528);
	v->a[28938] = 1;
	v->a[28939] = aux_sym_case_statement_repeat1;
	small_parse_table_1447(v);
}

void	small_parse_table_1447(t_small_parse_table_array *v)
{
	v->a[28940] = state(1232);
	v->a[28941] = 1;
	v->a[28942] = sym_case_item;
	v->a[28943] = state(1742);
	v->a[28944] = 1;
	v->a[28945] = sym__case_item_last;
	v->a[28946] = state(1538);
	v->a[28947] = 2;
	v->a[28948] = sym_concatenation;
	v->a[28949] = sym__extglob_blob;
	v->a[28950] = actions(774);
	v->a[28951] = 3;
	v->a[28952] = sym_raw_string;
	v->a[28953] = sym_number;
	v->a[28954] = sym_word;
	v->a[28955] = state(1468);
	v->a[28956] = 5;
	v->a[28957] = sym_arithmetic_expansion;
	v->a[28958] = sym_string;
	v->a[28959] = sym_simple_expansion;
	small_parse_table_1448(v);
}

void	small_parse_table_1448(t_small_parse_table_array *v)
{
	v->a[28960] = sym_expansion;
	v->a[28961] = sym_command_substitution;
	v->a[28962] = 16;
	v->a[28963] = actions(3);
	v->a[28964] = 1;
	v->a[28965] = sym_comment;
	v->a[28966] = actions(778);
	v->a[28967] = 1;
	v->a[28968] = anon_sym_LPAREN;
	v->a[28969] = actions(782);
	v->a[28970] = 1;
	v->a[28971] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28972] = actions(784);
	v->a[28973] = 1;
	v->a[28974] = anon_sym_DOLLAR;
	v->a[28975] = actions(786);
	v->a[28976] = 1;
	v->a[28977] = anon_sym_DQUOTE;
	v->a[28978] = actions(788);
	v->a[28979] = 1;
	small_parse_table_1449(v);
}

void	small_parse_table_1449(t_small_parse_table_array *v)
{
	v->a[28980] = anon_sym_DOLLAR_LBRACE;
	v->a[28981] = actions(790);
	v->a[28982] = 1;
	v->a[28983] = anon_sym_DOLLAR_LPAREN;
	v->a[28984] = actions(792);
	v->a[28985] = 1;
	v->a[28986] = anon_sym_BQUOTE;
	v->a[28987] = actions(794);
	v->a[28988] = 1;
	v->a[28989] = sym_extglob_pattern;
	v->a[28990] = actions(821);
	v->a[28991] = 1;
	v->a[28992] = anon_sym_esac;
	v->a[28993] = state(537);
	v->a[28994] = 1;
	v->a[28995] = aux_sym_case_statement_repeat1;
	v->a[28996] = state(1232);
	v->a[28997] = 1;
	v->a[28998] = sym_case_item;
	v->a[28999] = state(1620);
	small_parse_table_1450(v);
}

/* EOF small_parse_table_289.c */
